#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Mark[20];
    char Name[20];
    short Year;
    char Engine[9];
} Vehicle;

int main(){
    int n;
    printf("Please enter the number of Vehicle: ");
    scanf("%d", &n);
    Vehicle* vehicles = (Vehicle*) malloc(n * sizeof(Vehicle));

    for (int i = 0; i < n; i++){
        printf("Enter the %d Vehicle data: ", i);
        scanf("%s %s %hd %s", &vehicles[i].Mark, &vehicles[i].Name, &vehicles[i].Year, &vehicles[i].Engine);
        
        if (strcmp(vehicles[i].Engine, "Gasoline") != 0 &&
            strcmp(vehicles[i].Engine, "Diesel") != 0 &&
            strcmp(vehicles[i].Engine, "Electric") != 0) {
            printf("The engine is not in the list ('Gasoline', 'Diesel', 'Electric')\n");
            printf("Input again please\n");
            i--; 
        }
    }

    system("clear");
    for (int i = 0; i < n; i++){
        printf("Vehicle: %s %s\n", vehicles[i].Mark, vehicles[i].Name);
        printf("Year: %hd\n", vehicles[i].Year);
        printf("Engine Type: %s\n\n", vehicles[i].Engine);
    }
    free(vehicles);
}