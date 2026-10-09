#include "Calculator.h"
#include <cmath>

using namespace std;
static string makeRecord(double a, double b, string operation, double result) {
    return to_string(a) + operation + to_string(b) + '=' + to_string(result);
}

    Calculator::Calculator(History& h)
        : history(h)
    {}
    double Calculator::add(double a, double b) {
        double result = a + b;
        history.add(makeRecord(a, b, "+", result));
        return result;
    }
    double Calculator::subtract(double a, double b) {
        double result = a - b;
        history.add(makeRecord(a, b, "-", result));
        return result;
    }
    double Calculator::multiply(double a, double b) {
        double result = a * b;
        history.add(makeRecord(a, b, "*", result));
        return result;
    }
    bool Calculator::divide(double a, double b, double& result) {
        if (b == 0) {
            return false;
        }
        result = a / b;
        history.add(makeRecord(a, b, "/", result));
        return true;
    }
    double Calculator::power(double a, double b) {
        double result = pow(a, b);
        history.add(makeRecord(a, b, "^", result));
        return result;
    }
    bool Calculator::modulo(int a, int b, int& result) {
        if (b == 0) {
            return false;
        }
        result = a % b;
        history.add(to_string(a) + " mod " + to_string(b) + '=' + to_string(result));
        return true;
    }
