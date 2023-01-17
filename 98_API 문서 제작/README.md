Doxygon 이라는 출을 활용
자바 스타일 annotation을 활용하여, API문서를 제작

### 문법
- 주석 안에 작성함
- @ brief

```
/** @file main.cpp
    @brief test app
*/

#include <iostream>

/**
    @brief 함수 설명.
    @remark 주의 사항
    @param a : parameter 설명
    @return return 값 설명
*/

/**
    @brief 더하기 함수
    @param a : int a
    @param b : int b
    @return a+b
*/
int test1(int a, int b) {
    int c = a + b;
    return c;
}

void main() {
    int r = test1(1, 4);
    std::cout << r;
}
```
대충 doxygon이나, 기타 툴로 문서화 가능
