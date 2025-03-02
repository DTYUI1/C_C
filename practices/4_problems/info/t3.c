#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "apple";
    char *s2 = "banana";

    printf("%d\n", strcmp(s1, s2));  // Отрицательное (apple < banana)
    printf("%d\n", strcmp(s2, s1));  // Положительное (banana > apple)
    printf("%d\n", strcmp("abc", "abc"));  // 0 (равны)
}