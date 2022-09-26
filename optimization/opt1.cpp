#include "log.h"
using namespace stdl;

void foo(string arg) {}
void foo(const string& arg) {}
// 이게 제일 빠름.
void foo(string_view arg) {}

int main()
{
    string s = "01234456789";
    foo(s);
}