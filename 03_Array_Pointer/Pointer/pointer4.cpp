#include<iostream>
using namespace std;

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arrlength = sizeof(array)/sizeof(int);
    
    for(int* ptr = array; ptr < array + arrlength; ptr++) {
        cout << *ptr << "\n";
    }

    cout << "==========\n";

    string strarr[] = {"this", "is", "string", "arr"};
    int strarrlength = sizeof(strarr)/sizeof(string);

    for(string* ptr = strarr; ptr < strarr + strarrlength; ptr++) {
        cout << *ptr << "\n";
    }

    cout << "===========\n";
    string str = "Hey modudle anNyung nega nugunzi arni?";
    int strlen = str.length();

    const char* chararr = "addd";
    // char* chararr = "addd";  // 이건 작동 안함.

    int chararrlen = sizeof(chararr)/sizeof(char);
    cout << &(chararr[0]) << "\n";
    
    // for(char* ptr = chararr; ptr <)

    cout << *(&str) << "\n";

    // for(char* ptr = &str; ptr < &str + strlen; ptr++) {
    //     cout << *ptr << "\n";
    // }
}