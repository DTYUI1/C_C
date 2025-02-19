#include <stdio.h>
int check_fuel(int fuel_level){
    if (fuel_level < 10) printf("Fuel level is danger! \n");
    else printf("Fuel level is ok! \n"); 
    return 0; 
}