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
- 