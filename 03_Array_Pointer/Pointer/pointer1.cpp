#include<iostream>

using namespace std;

int main() {
    string food = "Pizza";
    string* ptr1 = &food;
    string *ptr2 = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr1 << endl;
    cout << ptr2 + 1 << endl;
    cout << *(ptr2) << endl;
    cout << *(ptr2 + 1) << endl;
}