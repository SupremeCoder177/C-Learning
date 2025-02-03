#include <stdio.h>

int main(){
    printf("Welcome....\n");

    int nums, count;
    float average, sum, temp;
    count = 1;
    sum = 0;

    printf("Enter an integer value:\n");
    scanf("%d", &nums);

    while(count <= nums){
        printf("Enter a number:\n");
        scanf("%f\n", &temp);
        sum += temp;
        count++;
    }
    average = sum / nums;
    printf("Sum of number: %8.2f\n", sum);
    printf("Average of sum : %8.2f", average);

    return 0;
}