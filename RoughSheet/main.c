#include <stdio.h>

int main(){

    // for(int i = 0; i <= 100; i++){
    //     float a, b;
    //     a = 1.0 / 3.0;
    //     b = a * 3.0;
    //     printf("%f\n", b);
    // }

    float sum, term;
    int n, count;
    count = 1;
    sum = 0;
    printf("Enter value of n\n");
    scanf("%d", &n);
    term = 1.0/n;
    printf("Term = %f\n", term);
    while(count <= n){
        sum += term;
        count++;
    }
    printf("Sum = %f\n", sum);

    return 0;
}