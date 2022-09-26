#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {
    vector<int> c1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int>   c2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto p1 = std::begin(c);
    auto p2 = std::begin(c);

    p1 = p1 + 5;    // vector는 더하기 연산자로 주소 연산 가능. list는 불가능
    ++p2            // list는 이렇게 해야 함.
    
    advance(p2, 5)  // 이렇게 쓰면 vector, list 둘 다 쓸 수 있음.
    // 잘 최적화되어있는 함수.
}