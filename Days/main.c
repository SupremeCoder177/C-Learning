#include <stdio.h>

#define MONTHS_DAYS 30
#define YEAR_MONTHS 12


int main(){

    int input, days, months, years;

    printf("Welcome........\n");
    printf("Enter number of days:\n");
    scanf("%d", &input);

    days = input % MONTHS_DAYS;
    months = input / MONTHS_DAYS;
    years = months / YEAR_MONTHS;

    printf("Days = %d, Months = %d, Years = %d", days, months, years);

    return 0;
}