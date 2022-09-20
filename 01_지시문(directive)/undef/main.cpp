#include<iostream>
using namespace std;

#define TIME 800
#include "SecTimer.cpp"

// undef를 넣지 않아도 작동하지만, 경고문이 발생.
#undef TIME

#define TIME 1000
#include "MinTimer.cpp"

int main() {    
    timer1.PRINT();
    timer2.PRINT();
}