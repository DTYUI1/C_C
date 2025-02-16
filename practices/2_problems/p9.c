#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    double Temperature;
    double Humidity;
    char Condition[7];
} Weather;

int main(){
    int n = 1;
    Weather* Weathers = (Weather*) malloc(n * sizeof(Weather));

    for (int i = 0; i < n; i++){
        printf("Enter the Weather data: ");
        scanf("%lf %lf %s", &Weathers[i].Temperature, &Weathers[i].Humidity, &Weathers[i].Condition);
        
        if (strcmp(Weathers[i].Condition, "Sunny") != 0 &&
            strcmp(Weathers[i].Condition, "Cloudy") != 0 &&
            strcmp(Weathers[i].Condition, "Rainy") != 0) {
            printf("The condition is not in the list (`Sunny`, `Cloudy`, `Rainy`)\n");
            printf("Input again please\n");
            i--; 
        }
    }

    system("clear");
    for (int i = 0; i < n; i++){
        printf("Temperature: %.1lf°C\n", Weathers[i].Temperature);
        printf("Humidity: %.1lf%%\n", Weathers[i].Humidity);
        printf("Condition: %s\n", Weathers[i].Condition);
    }
    free(Weathers);
}