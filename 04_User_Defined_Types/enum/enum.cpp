#include<iostream>

using namespace std;

int main() {
    enum COLOR {RED = 1, GREEN, BLUE};
    cout << COLOR::RED << GREEN << BLUE << endl;

    enum NUMS {ZERO, ONE, TWO};
    cout << ZERO << ONE << TWO << endl;
}