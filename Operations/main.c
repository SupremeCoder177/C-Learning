#include <stdio.h>


int main(){

    int a,b;
    float c,d;

    a = 10; b = 15;
    c = 12.4; d = 32.54;

    printf("Interger values:\n");
    printf("a = %d, b = %d\n\n", a, b);
    printf("Floating point number:\n");
    printf("c = %5.2f, d = %5.2f\n\n", c, d);

    printf("Addition:\n");
    printf("a + b = %d\n", a + b);
    printf("c + d = %f\n", c + d);

    printf("Subtraction:\n");
    printf("a - b = %d\n", a - b);
    printf("c - d = %f\n", c - d);

    printf("Multiplication:\n");
    printf("a * b = %d\n", a * b);
    printf("c * d = %f\n", c * d);

    printf("Division:\n");
    printf("a / b = %d\n", a / b);
    printf("c / d = %f\n", c / d);

    printf("Remainder:\n");
    printf("a \\\\ b = %d\n", a % b);
    printf("c \\\\ d = Nothing (floating point numbers cannot be used for modulo)");

    return 0;
}