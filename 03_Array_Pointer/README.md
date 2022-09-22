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

> 포인터는 메모리를 직접 참조한다는 특성때문에, 본질적으로 안전하지 않음.
> 보안상의 이유로 최신 OS들은 이런 메모리 접근이 감지되면 프로그램 다운시켜버리기도 함.

### Null Pointer
- 포인터는 변수와 마찬가지로, 생성될 때 초기화되지 않고 무의미한 값을 가지고 있게 됨.
- 변수에 기본값을 지정하듯, 포인터에도 null값을 지정할 수 있음.
- null을 가리키는 포인터를 null 포인터 라고 함.

```cpp
float* ptr {0}
float* ptr {nullptr} 
```
- 포인터에 0을 집어넣으면 null 포인터가 됨.
    - 포인터가 null 이면 false, 아니면 true
- null 포인터를 역참조하면 이상한 동작이 발생함.(주로 프로그램 종료)

### 포인터와 배열
```cpp
#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // a를 그냥 집어넣으면 첫번째 요소의 주소가 들어감.
    int* ptr = a;
}
```

##### 포인터를 이용한 배열 전달
- 함수로 배열을 전달하는 일을 포인터를 이용하여 싼 값에 처리 가능
```cpp
#include<iostream>

void printSize(int* array)
{
    // 주소가 가리키는 int의 사이즈 4가 출력됨.
    std::cout << sizeof(array) << "\n";
}

int main() 
{
    int array[] = {1, 2, 3, 4 , 5, 6, 7, 8, 9};
    // 전체 배열의 바이트 사이즈 36를 반환
    std::cout << sizeof(array) << '\n';
    
    printSize(array);
}
```

#### 포인터 산술, 배열 인덱싱
- ptr + 1 을 하면, int인 경우 ptr의 크기 4바이트를 건너서 다음 위치를 가르킨다.
- 배열은 메모리에 순차적으로 정리되기 때문에, 이 인덱싱으로 가져올 수 있다.
```cpp
#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // a를 그냥 집어넣으면 첫번째 요소의 주소가 들어감.
    int* ptr = a;
    
    for(int i = 0; i < 9; i++) {
        cout << ptr + i << " " << *(ptr + i) << endl;
    }
}
```

#### 배열의 동적 할당
- 빈 메모리 할당
```cpp
int *ptr = new int;
```
위처럼 할당한 후 역참조를 통해 값을 배정할 수 있음.
```cpp
*ptr = 10;
```

- 메모리 비우기
```cpp
delete ptr;
ptr = 0; //ptr을 null 포인터로 만듬
```

- 배열의 동적 할당
```cpp
int *array = new int[n];    // n이 상수가 아니어도 됨.
delete[] array; // delete[]를 써서 제거
```
- 배열의 동적 할당을 지울 때는 delete[]를 사용해야 함.
- 일반 delete를 사용할 시, 배열의 전 요소에 대해 제거되지 않음.




##### 참고자료
https://www.w3schools.com/cpp/cpp_pointers.asp
https://boycoding.tistory.com/204?category=1009770
