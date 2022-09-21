#include<iostream>
using namespace std;

// 클래스 선언
class tank;

// 클래스 정의
class tank {
private :
    int speed;
    int x, y;
    unsigned int dir : 2;

public :
    tank(int xin, int yin, int speedin);
    void move();
}

// 클래스 구현 (멤버함수 정의)
tank::tank(int xin, int yin, int speedin) {
    x = xin;
    y = yin;
    speed = speedin;
    dir = 0;
}
tank::move() {
    x++;
    y++;
}