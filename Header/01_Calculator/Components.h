
// 더하기 헤더
#ifndef ADDER_H
#define ADDER_H
class Adder
{
private :
    int op1, op2;
public :
    Adder(int a, int b);
    int Process();
};
#endif

// 빼기 헤더
#ifndef SUBTRACTER_H
#define SUBTRACTER_H
class SubTracter
{
private :
    int op1, op2;
public :
    SubTracter(int a, int b);
    int Process();
};
#endif