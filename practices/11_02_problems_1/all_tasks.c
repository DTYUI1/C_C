#include <stdio.h>

int task1() {
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

int task2() {
    int max_dist = 500;
    int dist;

    printf("Please input distantion of the nearest station: ");

    scanf("%d", dist);

    if (dist <= max_dist) {
        printf("Yuhu! Your lunokhod can to get to this station\n");
    } else {
        printf("Sorry, your lunokhod can't get to this station:(\n");
    }
}

