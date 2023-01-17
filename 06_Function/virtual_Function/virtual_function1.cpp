#include<iostream>
#include<cpprest/http_client.h>

using namespace std;

class Edit
{
    string data;
public :
    virtual vool validate(char c) {
        // 가상함수
        // 사용자가 Edit 클래스를 상속받아서,
        // 가상함수를 재정의하여 조건을 바꿀 수 있음.
        return true;
    }
    string getData()
    {
        data.clear();
        while (1)
        {
            char c = _getch();
            
            if(c == 13) break;
            
            // 값의 유효성 확인.
            // 이 부분을 가상함수로 변환.
            if(validate(c)) 
            {
                data.push_back(c);
                cout << c;
            }
        }
        std::cout << "\n";
        return data;
    }
}

// "template method" 라는 기술
class NumEdit : public Edit
{
public :
    bool validate(char c) override
    {
        return isdigit(c);
    }
}

// "strategy pattern" 정책을 정해서 가상함수로 사용하는 부분에 주입하는 방법