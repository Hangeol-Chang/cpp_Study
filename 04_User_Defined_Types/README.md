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