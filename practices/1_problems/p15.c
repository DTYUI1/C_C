#include <stdio.h>

int main() {
    float M, speed;
    printf("Please enter the data size in MB: ");
    scanf("%f", &M);
    printf("Enter the data transfer rate in Kbit: ");
    scanf("%f", &speed);

    printf("Data transfer time: %.4f minite(s)", M * 1024 * 8 / speed / 60);
    return 0;
}