#include <stdio.h>

int main() {
    int max_dist = 500;
    int dist;

    printf("Please input distantion of the nearest station: ");

    scanf("%d", &dist);

    if (dist <= max_dist) {
        printf("Yuhu! Your lunokhod can to get to this station\n");
    } else {
        printf("Sorry, your lunokhod can't get to this station:(\n");
    }

    return 0;
}
