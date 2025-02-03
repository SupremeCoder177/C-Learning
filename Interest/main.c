#include <stdio.h>

#define PRINCIPAL 5000.00
#define INTEREST 0.11

int main(){

    int year, lease;
    float amount = PRINCIPAL;

    year = 1;
    lease = 10;

    printf("Year\t\tAmount\n");

    while(year <= lease){
        amount = amount + (amount * INTEREST);
        printf("%d\t\t%7.2f\n", year, amount);
        year += 1;
    }

    return 0;
}