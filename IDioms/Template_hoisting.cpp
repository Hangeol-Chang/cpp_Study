#include<iostream>
using namespace std;

// Template_hoisting

class WindowBase
{
public :
    // 윈도우 관련 템플릿이 아닌 수십개의 함수들
    void MouseClick() { cout << "default implementation" << endl; }
    void KeyDown()    { cout << "default implementation" << endl; }
};

template<typename Derived> class Window : public WindowBase
{
public :
    void RunEventLoop()
    {
        static_cast<Derived*>(this)->MouseClick();
    }
};

class MyWindow : public Window<MyWindow>
{
public :
    void MouseClick() { cout << "custom o,[;e,emtatopm" << endl; }
}