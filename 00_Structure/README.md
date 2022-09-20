## Structure

### #include
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

### iostream
- c++ 에서 입력, 출력을 관리하는 헤더.
- input output stream의 약자.

#### 구성
- cin
입력받기
```cpp
int a;
string b;
// 띄어쓰기를 기준으로 입력받게 됨.
cin >> a >> b;
```

- cout : 출력

> 아래의 cerr, clog는 기본적으로 cout 처럼 콘솔창에 출력을 제공한다. cout, cerr, clog로 출력 형태가 세 개나 존재하는 것은 단순히 용도의 구분으로, 사용자가 쓰기, 에러, 로그 구분을 쉽게 해 주기 위한 것이다.
- cerr
주로 파일에 출력하는 용으로 사용 
```cpp
// 외부 파일에 쓰기 설정
std::ofstream outfile("err.txt");
std::cerr.rdbuf(outfile.rdbuf());

std::cerr << "error!!"
```
- clog
로그 작성에 사용


#### using namespace ~~
- ~~의 내용을 접근자 없이 사용하기 위한 내용.

#### std::endl
- 줄바꿈 + 스트림 버퍼를 지우는 템플릿 함수.
- 스트림 버퍼를 지우는 작업 때문에, 무수히 반복되는 for문 등에서 사용되면,
성능 저하의 주 원인이 되어 버림.
- 백준 문제풀다가 이런것때문에 어이없이 시간초과를 받는 경우가 생김.

#### return
- 반환