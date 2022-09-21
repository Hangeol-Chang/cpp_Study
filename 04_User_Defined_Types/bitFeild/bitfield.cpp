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

    f1.a = 1;
    f1.b = 7;
    f1.c = 127;

    // 1 7 127 출력됨
    cout << f1.a << " " << f1.b << " " << f1.c << endl;
    
    f1.a++;
    f1.b++;
    f1.c++;

    // 0 0 0 출력됨
    // 비트의 범위를 벗어나 0으로 돌아옴.   
    cout << f1.a << " " << f1.b << " " << f1.c << endl;
}