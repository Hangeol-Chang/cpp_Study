#include<iostream>
using namespace std;

// int형과 double형 중 하나만 사용하게 됨.
union UserType{
    int nValue;
    double dValue;
};

void print(UserType user) {
    cout << "nValue Addredd : " << &user.nValue << "\n";
    cout << "dValue Address : " << &user.dValue << "\n";
    cout << "nValue : " << user.nValue << "\n"; 
    cout << "dValue : " << user.dValue << endl; 
}

int main(int argc, char *argv[]) {
    UserType user;

    // nValue에 값을 넣어봄.
    user.nValue = 10;

    print(user);
    // dValue에 값을 넣어봄.
    user.dValue = 12.34;
    print(user);
}