#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <string.h> 

int main() {
    time_t t = time(NULL);
    struct tm *local = localtime(&t);

    int year = local->tm_year + 1900;
    int month = local->tm_mon + 1;
    int day = local->tm_mday;

    char today_date[9];

    snprintf(today_date, sizeof(today_date), "%d%02d%02d", year, month, day);
    printf("today = \'%s\'\n", today_date);

    char data[9];    
    printf("Please write your data: ");
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



