#include<iostream>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr = &a[0];
    
    // int형의 주소여서 4byte씩 차지함.
    for(int i = 0; i < 9; i++) {
        cout << ptr + i << " " << *(ptr + i) << endl;
    }
}