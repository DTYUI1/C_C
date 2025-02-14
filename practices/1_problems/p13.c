#include <stdio.h>

int main() {
    int N;
    printf("Please specify the number of passengers: ");
    scanf("%d", &N);

    if (N & 1) {
        printf("We can't deliver evryone without a trace! :(");
    } else {
        printf("We can deliver evryone without a trace! :)");
    }
    return 0;

}