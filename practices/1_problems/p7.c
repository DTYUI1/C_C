#include <stdio.h>

int main(){
    float signal;
    printf("Please enter the signal: ");
    scanf("%f", &signal);

    if (signal >= 2.5 && signal <= 3.5) {
        printf("The signal is fine :)");
    } else {
        printf("The signal is not fine :(");
    }

    return 0;
}