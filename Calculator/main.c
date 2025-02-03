#include <stdio.h>
#include <ctype.h>

int main(void){

    double num1, num2;
    int input;
    char choice = 'Y';

    printf("Welcome to the calculator !!\n\n");

    while(1){
        printf("Enter num1 :\n");
        scanf("%lf", &num1);
        printf("Enter num2 :\n");
        scanf("%lf", &num2);
        printf("Enter choice:\n");
        printf("1 : Add\n");
        printf("2 : Subtract\n");
        printf("3 : Multiply\n");
        printf("4 : Divide\n");
        scanf("%d", &input);
        switch(input){
            case 1:
                printf("The numbers added are : %lf", num1 + num2);
                break;
            case 2:
                printf("The numbers subtracted are : %lf", num1 - num2);
                break;
            case 3:
                printf("The numbers multiplied are : %lf", num1 * num2);
                break;
            case 4:
                printf("The numbers divided are : %lf", num1 / num2);
                break;
            default:
                printf("Please enter a number between 1 to 4 !!");
        }
        printf("\nWould you like to exit (Y/N)?\n");
        while(getchar() != '\n');
        choice = getchar();
        if(toupper(choice) == 'Y'){
            printf("Ok bye !!");
            break;
        }else{
            printf("Please enter Y or N !!\n");
        }
    }

    return 0;
}