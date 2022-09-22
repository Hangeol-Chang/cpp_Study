## 배열 포인터 (Array Pointer)

### 배열
- 순차적으로 여러 개의 자료 저장.
##### array
- 크기가 결정된 배열
```cpp
int arr[n];
```
arr[0], arr[1], ... 형태로 접근

##### vector, deque
- 동적으로 자료를 추가할 수 있는 배열

#### 다차원 배열
```cpp
#include<iostream>
using namespace std;

int main() {
    int arr2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }

    for(const auto& arr : arr2d) {
        for(const auto& num : arr) {
            cout << num + " ";
        }
        cout << endl;
    }
}
```


### 포인터
- 변수에 값을 저장하고 &를 통해 메모리의 주소에 접근하는 방식과 달리, 메모리 주소를 저장.
- 주소 연산자 &
```cpp
string food = "Pizza";
string* ptr = &food;    // food의 주소를 저장.
```

##### 포인터 선언법
```cpp
string* a;  // 권장됨
string *a;
string * a;
```

##### 포인터에서 값 가져오기.
```cpp
string food = "Pizza";
string* ptr = &food;

// *을 붙이면 값이 나옴
cout << *ptr
```
- *을 '역참조 연산자'라고 함. 
- 역참조 연산자를 붙인 포인터는 변수값을 나타내므로, 값을 대입할 수 있다.
```cpp
string food = "Pizza";
string* ptr = &food;

*ptr = "Hamberger";
cout << food;
```


##### 참고자료
https://www.w3schools.com/cpp/cpp_pointers.asp