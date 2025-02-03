#include <stdio.h>
#include <math.h>

#define PI 3.141

int main(){

    int angle, limit;
    float temp;
    angle = 0;
    limit = 180;

    printf("Angle(degrees)        cos(angle)");

    while(angle <= limit){
        temp = cos((PI / limit) * angle);
        printf("%d\t\t%5.3f\n", angle, temp);
        angle += 10;
    }

    return 0;
}