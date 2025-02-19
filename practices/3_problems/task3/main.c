#include <stdio.h>
#include "ship.h"

int main(){
    float time;
    printf("Please enter the time: ");
    scanf("%f", &time);
    float speed;
    printf("Enter the speed: ");
    scanf("%f", &speed);
    getchar();
    float dist = calculate_distance(time, speed);
    printf("The distance: %.2f km\n", dist);

    printf("Pleaase enter the fuel level: \n");
    int fuel_level;
    scanf("%d", &fuel_level);
    check_fuel(fuel_level);

    
}