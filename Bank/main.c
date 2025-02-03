#include <stdio.h>

#define BALANCE 10000.00
#define INTEREST 0.11
#define YEAR 2025

int main(){

    printf("Welcome...\n");
    int choice = 1;
    int year;

    do{
        printf("What would you like do?\n");
        printf("Type:\n0 = Exit\n1 = See Current Balance\n2 = See balance in year\n3 = See current year\n4 = View Interest Rate (Current)\n");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            printf("Current balance %8.2f\n", BALANCE);
            break;
        case 2:
            printf("Enter year:\n");
            scanf("%d", &year);
            if(year < YEAR){
                printf("Cannot show balance of past.\n");
            }else{
                int temp = YEAR;
                float sum = BALANCE;
                while(temp <= year){
                    sum += BALANCE * INTEREST;
                    temp++;
                }
                printf("Total balance in year %d : %10.2f\n", year, sum);
            }
            break;
        case 3:
            printf("Current Year: %d\n", YEAR);
            break;
        case 4:
            printf("Current interest rate : %3.2f\n", INTEREST);
            break;
        case 0:
            printf("Ok bye !!\n");
            break;
        default:
            break;
        }
    }while(choice != 0);

    return 0;
}