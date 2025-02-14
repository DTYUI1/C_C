#include <stdio.h>

int main() {
    int weight;
    printf("Please enter the weight: ");
    scanf("%d", &weight);

    if (weight % 4 != 0) {
        printf("It's imposible. We can't distribute evenly your cargo :(");
    } else {
        printf("We can distribute evenly your cargo ;)\n");
        printf("The distribution is %d kg\n", weight / 4);
    }

}