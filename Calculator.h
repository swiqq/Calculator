#pragma once
#include "History.h"
class Calculator {
private:
    History& history;
public:
    Calculator(History& h);
        
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    bool divide(double a, double b, double& result);
    double power(double a, double b);
    bool modulo(int a, int b, int& result);
};