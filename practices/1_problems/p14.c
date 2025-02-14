#include <stdio.h>

int main() {
    float weight;
    printf("Please enter the weight on the Earth: ");
    scanf("%f", &weight);

    printf("Weight on the moon: %.2f", weight / 6.0);
    return 0;
}