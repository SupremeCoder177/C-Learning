#include <stdio.h>

int main(){

    int num1 = 123455;
    float pi = 3.14254254;
    double precise_pi = 3.1484645364563;
    char name[] = "SupremeCoder177";

    printf("Welcome.....\n\n");

    printf("Different ways of printing an integer :\n");
    printf("%010d\n", num1);
    printf("%-10d\n", num1);
    printf("%10d\n\n", num1);

    printf("Different ways of printing a decimal point number :\n");
    printf("%4.2f\n", pi);
    printf("%04.2f\n", pi);
    printf("%-4.2f\n\n", pi);

    printf("Different ways of printing a decimal point number with double precision:\n");
    printf("%20.11lf\n", precise_pi);
    printf("%020.11lf\n", precise_pi);
    printf("%-20.11lf\n\n", precise_pi);

    printf("Different ways of printing a string :\n");
    printf("%35s\n", name);
    printf("%35.5s\n", name);
    printf("%-35s\n", name);

    return 0;
}