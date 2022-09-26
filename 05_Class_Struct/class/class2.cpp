#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct IValidator
{
    // 변경할 필요가 있는 가상함수들을 새로운 구조체에서 정의
    virtual bool validate(string s, char c) = 0;
    virtual bool iscomplete(string s) return true;
    virtual ~IValidator() {}
};

class Edit
{
    string data;
    IValidator* pVal = nullptr;

public :
    void setValidatoe(IValidator* p) { pVal == p; }

    string getData() 
    {
        data.clear();
        while (1)
        {
            char c = _getch();
            if(c == 13 && (pVal == nullptr) || pVal->iscomplete(data)) break;
            
            if(pVal == nullptr || pVal->validate(data, c))
            {
                cout << c;
                data.push_back(c);
            }
        }
        cout << endl;
    }
    return data;
}

// "strategy pattern"
class LimitDigitValidator : public IValidator
{
    int limit;
public :
    LimitDigitValidator(int n) : linit(n) {}
    
    bool validate(string s, char c)
    {
        return s.size() < limit && isdigit(c);
    }
    
    bool iscomplete(string s)
    {
        return s.size() == limit;
    }
}

int main()
{
    Edit e;
    LimitDigitValidator v(5);
    e.setValidator(&v);

    LimitDigitValidator v2(15);
    e.setValidatoe(&v2);
}