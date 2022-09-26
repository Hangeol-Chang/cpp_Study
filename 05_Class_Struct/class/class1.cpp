#include<iostream>

using namespace std;

class point
{
    int x, y;

public :
    void set(int a, int b)  // set(Point* this, int a, int b) 자기 자신이 전달됨.
    {
        x = a;
        y = b;
    }

    static void foo(int a)
    {
        x = a;
    }
};

int main() 
{
    Point p1, p2;

    p1.set(10, 20); // => set(&p1, 10, 20) 형태로 전달됨.
}