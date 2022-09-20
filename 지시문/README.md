## 전처리기 (preprocessor)
> 프로그램을 컴파일하기 직전에 실행되는 별도의 프로그램. 
> 전처리기는 #으로 시작하는 지시자(directives)를 찾아서 처리한다.

#include를 풀어주거나, #def를 처리하는 등을 함.

## 지시문
- 소스 프로그램을 쉽게 변경하고, 다른 실행 환경에서 컴파일하기 쉽게 만드는 데에 사용
- 컴파일러에게 특정 작업을 수행하도록 지시함.
    - 텍스트에서 토큰 변경
    - 다른 파일의 내용을 소스에 삽입

### 종류
```
#define
#error
#import
#pragma
#elif
#if
#include
#undef
#else
#ifdef
#line
#using
#endif
#ifndef
```

### include
- 지시문이 있는 지점에 정해진 내용을 모두 포함시키는 것.
극단적인 예로 아래와 같이 쓸 수 있음.
- part1.cpp
```cpp
using namespace std;
int main()
{
```
- part2.cpp
```cpp
    return 0
}
```
- main.cpp
```cpp
#inlcude "part1.cpp"
#include "part2.cpp"
```

### define
- 길게 써야 하는 것을 짧게 쓰기 위해 사용하는 구문.
```cpp
#include <iostream>
#define MAXINT 2147239752

using namespace std;
int main() {
    cout << MAXINT;
}
```

- 아래처럼 함수를 def해서 사용하는 것도 가능.
```cpp
#include<iostream>
using namespace std;

#define multiply(f1, f2) (f1 * f2)
#define PRINT(a) cout << a << endl;

int main() {
    int result = multiply(5, 6);
    PRINT(result);
}
```

- define은 안에 사용되는 인수의 연산 순서를 잘 파악해야 함.
```cpp
#include<iostream>
using namespace std;

#define SQR(X) X*X

int main() {
    int x = 5;
    cout << SQR(x);     // 25
    cout << SQR(x+3);   // 23
}
```
> 위 계산에서 SQR(x+3)이 23이 나오는 이유는 이 식을 풀게 되었을 때
> x + 3 * x + 3 이 되어서 5 + 3 * 5 + 3이 되기 때문.

- 위와 같은 오류를 방지하기 위해, 아래처럼 모든 인수를 ()로 감싸서 사용
```cpp
#define SQR(X) ((X) * (X))
```
> SQR(x+3)에서 64의 결과를 얻게 됨.

#### 변수 이름의 동적 생성
##### ##연산자
- 두 개의 토큰을 하나의 토큰으로 합쳐 줌.

```cpp
#include<iostream>
#define XN(n) x ## n

using namespcae std;
int main() {
    // 변수명 자리에 XN함수가 들어갔고, 이는 각각 x1, x2를 반환함.
    int XN(1) = 10;
    int XN(2) = 20;
    
    cout << x1 << " " << x2;
}
```

### undef
- define으로 정의한 것을 제거하고, 새로 정의하기 위해서
##### 왜 사용함?
- #include로 여러 파일을 가져올 때, 각각에 다른 def를 넣어주기 위해서
```cpp
#define TIME 800
#include <part1.h>

#undef TIME
#define TIME 1000
#include <part2.h>
```
- 위처럼 사용할 시 part1.h에서는 TIME = 800, part2.h에서는 TIME = 1000이 된다.
- undef 없이 define만 두 번 써서 정의해도 사용 가능. 하지만 경고를 보게 됨.

### ifdef, if, endif, ifndef, elif, else
```cpp
#ifdef 매크로명
{
    
}
#endif
```
#### ifdef
- 만약 '매크로명'이 정의되어 있으면 블록을 실행.
#### if, elif
- 매크로명 안의 값이 TRUE인지 판단.(조건문 쓸 수 있음)
> c++, c의 구동 환경 간 차이에서 오는 에러를 처리하기 위해 주로 사용되며,
> 일반적으로 빌드 환경이 고정적일 때는 잘 사용되지 않는다.
```cpp
#if NUM == 1
    cout << 1 << endl;
#elif NUM == 2
    cout << 2 << endl;
#endif
```
#### ifndef
- 만약 '매크로명'이 정의되어 있지 않으면 블록을 실행.

### using
- dll 등의 외부 파일을 가져오기 위한 지시문

### line
- #line으로 하여 라인과 파일명을 지정할 수 있음
(이걸 어따쓰나여?)
```cpp
#include <iostream>

using namespace std;
int main() {
    cout << __LINE__ << __FILE__<< endl;    //5 line.cpp
    cout << __LINE__ << __FILE__<< endl;    //6 line.cpp
#line 11 "line2.cpp"
    cout << __LINE__ << __FILE__<< endl;    //11 line2.cpp
    cout << __LINE__ << __FILE__<< endl;    //12 line2.cpp
#line 1
    cout << __LINE__ << __FILE__<< endl;    //1 line2.cpp
}
```

#### #error
- #if와 일반적으로 같이 쓰임. 
- 특정 상황을 불만족할 때 에러를 발생시키는 역할. 