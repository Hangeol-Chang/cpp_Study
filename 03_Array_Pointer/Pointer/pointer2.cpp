#include<iostream>
#define nn "\n"

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // a를 그냥 집어넣으면 첫번째 요소의 주소가 들어감.
    int* ptr = a;
    
    // int형의 주소여서 4byte씩 차지함.
    for(int i = 0; i < 9; i++) {
        cout << ptr + i << " " << *(ptr + i) << endl;
    }

    cout << "============\n";


    cout << &a[1] << nn;
    cout << a + 1 << nn;
    cout << a[1] << nn;
    cout << *(a + 1) << nn;
}
