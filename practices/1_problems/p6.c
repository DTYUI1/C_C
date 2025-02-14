#include <stdio.h>

int main() {
    int astronauts;
    printf("The entry number of astronauts: ");
    scanf("%d", &astronauts);

    if (astronauts % 2 != 0){
        printf("It is impossible to staff 2 astronauts each\n");
    }
    printf("Complete set of 2: %d\n", astronauts / 2);

    if (astronauts % 3 != 0){
        printf("It is impossible to staff 3 astronauts each\n");
    }
    printf("Complete set of 3: %d\n", astronauts / 3);

    if (astronauts % 4 != 0){
        printf("It is impossible to staff 4 astronauts each\n");
    }
    printf("Complete set of 4: %d\n", astronauts / 4);
    
}