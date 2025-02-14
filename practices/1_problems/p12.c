#include <stdio.h>

int main(){
    int angle;
    printf("Please enter the angle: ");
    scanf("%d", &angle);

    if (angle >= -180 && angle <= 180) {
        printf("The angle is in the range :)");
    } else {
        printf("The angle is not in the range :(");
    }
    return 0;
}