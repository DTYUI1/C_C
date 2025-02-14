#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int parse_int(const char *str, int *result) {
    int num = 0;
    bool negative = false;
    int i = 0;

    // Пропускаем пробелы
    while (isspace(str[i])) {
        i++;
    }

    // Проверяем знак
    if (str[i] == '-') {
        negative = true;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Читаем цифры
    while (isdigit(str[i])) {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    // Если не было цифр, возвращаем ошибку
    if (i == 0 || (i == 1 && (str[0] == '-' || str[0] == '+')))
        return 0;


    *result = negative ? -num : num;
    return 1; // Успех
}
