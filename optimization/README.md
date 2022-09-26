## 최적화

```cpp
#include "log.h"
using namespace stdl;

// 제일 느림.
void foo(string arg) {}
// 복사해오지 않고 주소만 가져오기에 위에보다 빠름.
void foo(const string& arg) {}
// 이게 제일 빠름.
void foo(string_view arg) {}

int main()
{
    string s = "01234456789";
    foo(s);
}
```
