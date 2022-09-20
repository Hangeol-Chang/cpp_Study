#include "Components.h"
#include "Calculator.h"

int Calculator::Add(int a, int b)
{  
    Adder calc(a, b);
    return calc.Process();
}

int Calculator::Subtract(int a, int b)
{
    Subtracter calc(a, b);
    return calc.Process();
}