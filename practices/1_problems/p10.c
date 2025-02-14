#include <stdio.h>

int main(){
    int temperature;
    printf("Please enter the temperature: ");
    scanf("%d", &temperature);

    printf("%d\n", temperature);
    if (temperature >= -150 && temperature <= 120) {
        printf("The temperature is fine :)");
    } else {
        printf("The temperature is not fine :(");
    }

    return 0;
}
