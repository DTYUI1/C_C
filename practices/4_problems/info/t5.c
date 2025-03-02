#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int standart_sort(const void *a, const void *b) {
    const char * const *str_a = (const char * const *)a; // Приводим к типу char**
    const char * const *str_b = (const char * const *)b;
    return strcmp(*str_a, *str_b); // Используем strcmp для сравнения строк
}

int main() {
    char *strings[2];
    int n = sizeof(strings) / sizeof(strings[0]);

    do 
    {
    printf("Please input first string:\n");
    

    qsort(strings, n, sizeof(char *), standart_sort);

    for (int i = 0; i < n; i++) {
        printf("%s ", strings[i]);
    }
    printf("\n"); // Вывод: apple banana grape orange
    return 0;

    } while (1);

    return 0;
}