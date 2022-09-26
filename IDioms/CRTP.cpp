#include<iostream>
using namespace std;

// CRTP Pattren

// 이렇게 클래스로 정의하면, 사용자가 만들 클래스명을 확신할 수 없기에,
// 정의에 문제가 있음.
class Window
{
    public :
        void RunEventLoop()
        {
            // MouseClick();
            static_cast<MyWindow*>(this)->MouseClick();
        }
        virtual void MouseClick() { cout << "default implementation" << endl; }
}

// 따라서 아래처럼 Window를 템플릿화 함.
template<typename Derived> class Window
{
    public :
    void RunEventLoop()
    {
        static_cast<Derived*>(this) -> MouseClick();
    }
    void MouseClick() { coud << "default implementation" << endl; }
}

// 클래스명을 임의로 정의하여 사용 가능.
// 파생받은 Window한테 MyWindow라는 내 이름을 넘겨주게 함.
class MyWindow : public Window<MyWindow>
{
public :
    void MouseClick() { cout << "custom implementation" << endl; }
};