#include <stdio.h>

int main() {
    int time;
    printf("Please input the time in seconds: ");
    scanf("%d", &time);

    printf("Your time: %d minute(s) %d second(s)\n", time / 60, time % 60);
    printf("Thank you for using our services! :)");

}