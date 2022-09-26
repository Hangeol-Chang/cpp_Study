#include<iostream>

using namespace std;


int main() {
    char cs1[] = "abcd";        // 문자열을 스택에 보관.
    const char* cs3 = "abcd";   // 스택에는 포인터만.. 문자열은 상수 메모리에

    string s1 = "abcd";         // s1 자체가 문자열 보관.
    string_view s2 = "abcd";    // 포인터만 보관

    string s3 = "abcd";
    
    string s4 = s3;             // 문자열 복사.
    string_view s5 = s3;        // 포인터만 가져감.
}