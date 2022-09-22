#include<iostream>

using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    *ptr = "Hamberger";
    cout << food;
}