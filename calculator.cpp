#include "calculator.h"

int Calculator::Add (int a, int b)
{
    return a + b;
}

int Calculator::Mul (double a, double b)
{

    return a * b + 0.5;
}
int Calculator::RandomLogic(int x, int y) {
    int result = (x * 2) + (y / 3);

    return result;
}

double Calculator::AnotherRandomLogic(double p, double q) {
    double result = (p * q) - (p / q) + 42.0;

    return result;
}
