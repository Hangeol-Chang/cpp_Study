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

