## Header
- 클래스 선언부를 헤더 파일에, 구현부를 CPP에 작성
- 재사용을 위해 사용됨

### Calculator
덧셈 연산을 해 주는 계산기

- 한 파일에 모두 작성할 시
```cpp
#include<iostream>
using namespace std;

class Adder 
{
private :
    int op1, op2;
public :
    Adder(int a, int b);
    int Process();
};
// 생성자 구현
Adder::Adder(int a, int b)
{
    this->op1 = a;
    this->op2 = b;
}
int Adder::Process()
{
    return this->op1 + this->op2;
}

class Calculator
{
public:
    void Run();
};
void Calculator::Run()
{
    cout << "두 수 입력";
    int a, b; cin >> a >> b;
    Adder add(a, b);
    cout << adder.Proccess();
}

// main
int main() {
    Calculator calc;
    calc.Run();
}
```

파일 분리

- main.cpp
```cpp
#include "Calculator.h"
int main() {
    Calculator calc();
    calc.Run();
}
```
- Adder.h
```cpp
#ifndef ADDER_H
#define ADDER_H
class Adder
{
private :
    int op1, op2;
public :
    Adder(int a, int b);
    int Process();
};
#endif
```
- Adder.cpp
```cpp
#include "Adder.h"
Adder::Adder(int a, int b)
{
    op1 = a;
    op2 = b;
}
int Adder::Process()
{
    return op1 + op2;
}
```

- Calculator.h
```cpp
#ifndef CALCULATOR_H
#define CALCULATOR_H
class Calculator
{
public :
    void Run();
};
#endif
```
- Calculator.cpp
```cpp
#include "Calculator.h"
#include "Adder.h"
#include <iostream>

void Calculator::Run()
{
    cout << "두 수 입력"
    int a, b; cin >> a >> b;
    Adder adder(a, b);
    cout << adder.Process();
}
```

위 파일을 컴파일하게 되면(main.cpp)
컴파일러는 각각의 cpp파일을 컴파일하여 main.exe파일을 생성.
cpp파일만 컴파일하고 h파일은 컴파일하지 않음.