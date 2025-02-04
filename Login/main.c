#include <ctype.h>
#include <stdio.h>

int main(void){

    char choice;
    char name[100], password[20];
    char pass[20] = "12345678";
    unsigned short correct_info = 1;
    printf("Welcome....\n");
    printf("Would you like to login (Y/N)?\n");
    while(1){
        choice = getchar();
        if(toupper(choice) == 'Y' || toupper(choice) == 'N'){break;}
        else{printf("Please enter Y or N only .\n");}
    }
    if(toupper(choice) == 'N'){printf("Bye then !!");}
    else{
        printf("Enter your username please .\n");
        scanf("%s", &name);
        printf("Enter password please :");
        scanf("%s", &password);
        printf("You Entered %s\n", password);
        for(int i = 0; i < sizeof(pass) / sizeof(pass[0]); i++){
            if(pass[i] != password[i]){
                correct_info = 0;
                break;
            }
        }
        if(correct_info == 0){
            printf("Incorrect password entered !!\n");
        }else{
            printf("Welcome %s", name);
        }
    }

    return 0;
}