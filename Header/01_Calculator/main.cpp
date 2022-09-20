#include<iostream>
#include "Calculator.h"

using namespace std;

int main() {
    Calculator calc;

    cout << calc.Add(1, 5) << endl;
    cout << calc.Subtract(1, 5) << endl;
}