#include <stdio.h>
#include <stdlib.h>

// Глобальные переменные
int global_var = 42; 
int uninitialized_global_var; 

// Статическая переменная
static int static_var = 10;

// Структура
struct Point {
    int x;
    int y;
};

struct Point global_point = {1, 2};

// Функция
void print_message() {
    static int static_local_var = 5;
    int local_var = 3;
    printf("Message from function!\n");
}

int main() {
    int auto_var = 100;
    int *dynamic_var = malloc(4);
    if (dynamic_var) {
        *dynamic_var = 200;
    }

    struct Point stack_point = {3, 4};

    print_message();

    free(dynamic_var); 

    return 0;
}