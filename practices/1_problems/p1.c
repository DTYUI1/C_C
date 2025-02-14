#include <stdio.h>

int main() {
    int min = 60, max = 90;
    int weihgt;

    printf("Please input your weight: ");
    scanf("%d", &weihgt);

    if (weihgt < min || weihgt > max) {
        printf("Promlem! Your weight is not normal :(\n");
    } else {
        printf("Your weight is okey! Good body!\n");
    }

    return 0;
}
