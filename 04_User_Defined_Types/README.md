## 사용자 정의 자료형 (User-Defined Types)
struct, class 등을 이용하여 복잡한 형태의 자료구조를 만들거나,
typeof, using 등을 이용하여 기존의 자료를 재정의

### 열거형, 클래스 열거형
#### 열거형
- 0부터 1씩 증가하는 인덱스를 자료로 만드는 값을 지정.
```cpp
#include<iostream>
using namespace std;

int main() {
    enum COLOR = {RED = 1, GREEN, BLUE};
    cout << COLOR::RED << COLOR::GREEN << COLOR::BLUE << endl;
    cout << RED << GREEN << BLUE << endl;
    
    enum NUMS = {ZERO, ONE, TWO};
    cout << ZERO << ONE << TWO << endl;
}
```

##### 이걸 어따 쓰는데?
- 특정한 상태 집합과 코드 문서화, 가독성 면에서 매우 유용.

#### 클래스 열거헝
열거형 클래스 COLOR 자체는 출력 자체가 불가.
열거형 변수 중 하나를 상위 열거 변수타입으로 선언 가능
```cpp
enum class COLOR = {RED, GREEN, BLUE};
COLOR c = COLOR::RED;   //이렇게 c에 넣는 것이 가능
```
위처럼 선언된 c는 출력은 불가능하나, switch, if문 등에서 처리 가능=
```cpp
if(c == COLOR::RED) { // 처리 코드 }
```

### 구조체 Structure
구조상 class와 다른 점 없음.
class는 기본적으로 접근제한자가 private인 반면에, struct는 public을 사용

### 공용체 Union
일반적으로 struct나 class에 포함하여 사용.
- 다른 자료형의 값을 상황에 따라 하나만 선택적으로 사용하기 위한 것.
    - 멤버면수를 여럿 만들어도 되지만, 불필요한 공간을 최소화하기 위해 사용됨.
```cpp
#include<iostream>
using namespace std;

// int형과 double형 중 하나만 사용하게 됨.
union UserType{
    int nValue;
    double dValue;
};

void print(UserType user) {
    cout << "nValue Addredd : " << &user.nValue << "\n";
    cout << "dValue Address : " << &user.dValue << "\n";
    cout << "nValue : " << user.nValue << "\n"; 
    cout << "dValue : " << user.dValue << endl; 
}

int main(int argc, char *argv[]) {
    UserType user;

    // nValue에 값을 넣어봄.
    user.nValue = 10;

    print(user);
    // dValue에 값을 넣어봄.
    user.dValue = 12.34;
    print(user);
}
```
위 코드의 결과
```
nValue Addredd : 0x61fdf0
dValue Address : 0x61fdf0
nValue : 10
dValue : 4.94066e-323

nValue Addredd : 0x61fdf0
dValue Address : 0x61fdf0
nValue : 2061584302
dValue : 12.34
```
- 두 값(nValue, dValue)의 주소는 동일하지만 nValue에 값이 입력되었을 때는 dValue가 무의미한 값이 입력되어 있고, dValue가 입력되었을 때는 반대인 것을 볼 수 있다.

### 비트필드 Bit Field
struct, class를 이용하고 명시적으로 bit크기를 지정하여 멤버변수를 선언.
- 변수를 선언할 때, 콜론(:) 뒤에 비트 수를 지정하여 이 자료에 사용될 비트 수를 지정
- 정수자료형을 사용할 수 있으며, 주로 unsigned 형태로 사용

```cpp
#include<iostream>
using namespace std;

struct Flags {
    unsigned int a : 1; // a에 1비트 크기 지정
    unsigned int b : 3;
    unsigned int c : 7;
};

int main() 
{
    Flags f1;
    f1.a = 1; f1.b = 7; f1.c = 127;
    // 1 7 127 출력됨
    cout << f1.a << " " << f1.b << " " << f1.c << endl;
    
    f1.a++; f1.b++; f1.c++;
    // 0 0 0 출력됨
    // 비트의 범위를 벗어나 0으로 돌아옴.   
    cout << f1.a << " " << f1.b << " " << f1.c << endl;
}
```
### 클래스 Class
- 객체의 동작(Behavior), 자료(data)를 정의
- 객체지향 언어인 만큼 자료를 은닉하여 구현.
#### 접근제어자
- private
- protected
- public

#### 클래스 멤버
- 생성자 constructor
- 소멸자 destructor
- 복사생성자 copy constructor
- 이동생성자 move constructor
- 복사 대입 연산자 copy assignment operator
- 이동 대입 연산자 move assignment operator
- 비교, 산술 연산자 logic & arithmetic operators
- 멤버함수
- enum, enum class, type alias 기타 등등

```cpp
#include<iostream>
using namespace std;

// 클래스 선언
class tank;

// 클래스 정의
class tank {
private :
    int speed, x, y;
    unsigned int dir : 2;

public :
    tank(int xin, int yin, int speedin);
    void move();
}

// 클래스 구현 (멤버함수 정의)
tank::tank(int xin, int yin, int speedin) {
    x = xin; y = yin;
    speed = speedin;
    dir = 0;
}
tank::move() {
    x++; y++;
}
```
#### 특수함수
- 생성자 constructor
- 소멸자 destructor
- 복사생성자 copy constructor
- 이동생성자 move constructor
- 복사 대입 연산자 copy assignment operator
- 이동 대입 연산자 move assignment operator

- 몰라도 됨.


### 데이터 구조 정렬


##### 참고자료
https://boycoding.tistory.com/179
https://dojang.io/mod/page/view.php?id=472
