#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <string.h> 

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



int task3() {
    char mark;

    printf("Please, write your marking the part of the spaceship\n");
    mark = getchar();

    if (mark <= 'z' && mark >= 'a' || mark <= 'Z' && mark >= 'A') {
        printf("Marking is correct.\n");
    } else {
        printf("Marking is not correct.\n");
    }

    return 0;

}


// #include <stdio.h>
// #include <ctype.h>
// #include <stdbool.h>
// #include <time.h>
// #include <string.h> // Добавлено для strlen

int task4() {
    time_t t = time(NULL);
    struct tm *local = localtime(&t);

    int year = local->tm_year + 1900;
    int month = local->tm_mon + 1;
    int day = local->tm_mday;

    char today_date[9];

    snprintf(today_date, sizeof(today_date), "%d%02d%02d", year, month, day);
    printf("today = \'%s\'\n", today_date);

    char data[9];    
    printf("Please, write your data: ");
    fgets(data, sizeof(data), stdin);

    for (int i = 0; i < 8; i++){
        if (today_date[i] > data[i]){
            printf("It's not a future :(");
            return 0;
        } else if (today_date[i] == data[i]){
            continue;
        } else {
            printf("It's a future!!!, %i", i);
            return 1;
        }
    }
    printf("It's not a future :(");
    return 0;
    
}