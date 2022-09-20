#include<iostream>
#define name(i) x ## i ## i

using namespace std;

int main() {
    string name(1) = "name 1";
    string name(2) = "name 2";
    string name(3) = "name 3";

    cout << x11 << " " << x22 << " " << x33 << endl;
}