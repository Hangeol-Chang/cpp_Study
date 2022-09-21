## 자료형 (Data Type)

### 기본 자료형
##### bool
- 1byte
- 0은 false

##### char, wchar_t
- char
    - 1byte
    - ASCII에 대응하는 문자 정보
- wchar_t
    - 4byte
    - UTF-8에 대응

##### int
- 4byte

##### double
- 8byte
- 부동소수점

| bool | boolean | 1byte | |
| char | character | 1byte | |
| wchar | wide character | 4byte | |
| int | integer | 4byte | |
| double | double | 8byte | |

#### 기본 자료형의 정의, 초기화
```cpp
int n = 0;
int n(0);
int n = {0};
int n{0};
```
#### 자료 삭제
```cpp
int a = 1;
delete a;
```

#### extern
- 다른 파일에서 선언한 변수를 사용하려고 할 때 사용
```cpp
// source.cpp
int number = 100;
```
```cpp
//main.cpp
#include<iostream>

extern int number;

int main() {
    std::cout << number;
}
```
- extern이 붙어있으면 컴파일러가 이를 정의가 아닌 선언문으로 판단하여, 메모리 할당을 진행하지 않음.

#### static
- 정적 변수
- static이 붙은 변수는 외부 파일에서 활용할 수 없음.

#### const, constexpr
- 상수 표현식
> const, constexpr 둘 다 한 번 선언하면 바꿀 수 없는 상수 표현이지만,
> constexpr은 compile될 때 확정되어야 하는 반면, const는 compile, runtime 중 어느 때 든 할당되기만 하면 된다.

##### const + 포인터
```cpp
// p1의 값이 const가 됨
const int * p1  = new int;
*p1 = 10; //에러
delete p1
p1 = new int;
```
```cpp
// p1의 주소가 const가 됨.
const * int p1 = new int;
*p1 = 10; //값 변경 가능
delete p1;
p1 = new int; // 새 주소 할당 불가
```

### 사용자 정의 자료형
- complex, tuple, pair, array, string, vector, map 등은 전부 사용자 정의 자료형.
- struct, enum, class 를 사용하여 제작 가능.

### auto, decltype, typeinfo
##### auto
- 자료형을 자동으로 지정
```cpp
auto n = 10;    // int
auto d = 3.14;  // double
```

##### decltype
- 존재하는 객체의 자료형으로 새로운 객체의 자료형을 지정.
```cpp
auto n = 10;    // int
decltpye(n) d = 3;  // int
```

### typedef, using
- 실제 변수 타입 대신 별칭을 사용
- 이미 정의된 자료형이나, 사용자 정의 자료형을 짧거나 의미있게 사용 가능.
```cpp
//double 타입을 distance_t로 지정
typedef double distance_t;
distance_t d = 14.23;
```
#### 사용 목적
- 가독성
- 플랫폼 독립 코딩
    - c++은 java와 다르게 short, int, long이 플랫폼에 따라 크기가 다름.(이래서 자바 써야됨)
    - 이를 플랫폼에 관계없이 맞춰주기 위해 새용가능.
    ```cpp
        #ifdef INT_2_BYTES
        typedef char int8_t
        typedef int int16_t
        typedef long int32_t
        #else
        typedef char int8_t
        typedef short int16_t
        typedef int int32_t
        #endif
    ```
- 복잡한 타입 간단하게 만들기
```cpp
// 겁나 불편함.
std::vector<std::pair<std::string, int>> pairlist;

// 편안
typeof std::vector<std::pair<std::string, int>> pairlist_t;
pairlist_t pairlist;
```

#### using
- 기능적으로 typedef와 같다.
아래처럼 사용
```cpp
// typedef와 다르게 새로 정의하는 이름이 앞에 온다.
// 가독성 면에서 typedef보다 using의 사용이 권장된다.
using distance_t = double;
```

##### 참고자료
https://boycoding.tistory.com/182?category=1008283
