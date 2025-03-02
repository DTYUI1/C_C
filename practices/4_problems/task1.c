#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    char buff[100];
    printf("Please input the number of ships: ");
    scanf("%d", &n);
    getchar();

    char **ships = malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++){
        printf("Plese input the name of ship %d: ", i+1);
        fgets(buff, sizeof(buff), stdin);
        ships[i] = strdup(buff);
        system("clear");
    }

    for (int i = 0; i < n; i++){
        if (strncmp("SS", ships[i], 2) == 0) {
            printf("%s", ships[i]);
            
            for (int i = 0; i < n; i++){
                free(ships[i]);
            }
            free(ships);
            return 1;
        }
        
    }

    for (int i = 0; i < n; i++) {
        free(ships[i]);
    }
    free(ships);

    printf("Не найдено");
    return 1;
    // for (int i = 0; i < n; i++){
    //     printf("The name of ship %d: %s\n", i+1, ships[i]);
    // }
}