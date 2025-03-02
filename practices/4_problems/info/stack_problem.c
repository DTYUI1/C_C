#include <stdio.h>

int main() {
    char str1[] = "Hello";  // Строка в массиве (автоматически '\0' в конце)
    char str2[] = {'H', 'i'};  // Нету '\0'

    printf("%s\n", str1);  // Hello
    printf("%s\n", str2);  // Hi
    return 0;
}