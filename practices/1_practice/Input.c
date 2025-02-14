#include <stdio.h>

int main() {
    int age; // ячейка памяти в main 
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");

    scanf("%d", &age);

    printf("Yours name: %s and age %d", name, age);
}


