#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2){
    return operation(number1, number2);
}

double foo(double a, double b){
    return a-b;
}

int main()
{
    printf("%lf\n", calculateOperation(pow, 3,4));
    printf("%lf\n", calculateOperation(foo, 3.3,-1e3));
    return 0;
}
