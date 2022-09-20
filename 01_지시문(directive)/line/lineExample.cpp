#include <iostream>

using namespace std;
int main() {
    cout << "thie code is line " << __LINE__ << ", in file " << __FILE__<< endl;
    cout << "thie code is line " << __LINE__ << ", in file " << __FILE__<< endl;

#line 11 "line2.cpp"
    cout << "thie code is line " << __LINE__ << ", in file " << __FILE__<< endl;
    cout << "thie code is line " << __LINE__ << ", in file " << __FILE__<< endl;
#line 1
    cout << "thie code is line " << __LINE__ << ", in file " << __FILE__<< endl;
}