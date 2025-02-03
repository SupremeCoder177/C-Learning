#include <stdio.h>

void print_list(char str[]);

int main(){

    printf("Hello, world !!\n");
    printf("What is your name ?\n");

    char name[100];
    scanf("%99s", &name);
    printf("Hello ");
    print_list(name);

    return 0;
}

void print_list(char str[]){
    for(int i = 0; str[i] != '\0'; i ++){
        printf("%c", str[i]);
    }
    printf("\n");
}