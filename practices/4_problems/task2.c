#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    
    short flag1 = 0;

    if (strcspn(str, "#") == 0 || strcspn(str, "*") == 0) {
        str[0] = ' ';
        flag1 = 1;
    }

    if (strcspn(str, "#") == strlen(str) - 1 || strcspn(str, "*") == strlen(str) - 1) {
        str[strlen(str) - 1] = '\0';
    }

    char buff[101];
    if (flag1) {
        for (int i = 1; i < strlen(str); i++) {
            buff[i-1] = str[i];
        }
        buff[strlen(str)] = '\0';
    } else {
        for (int i = 0; i < strlen(str); i++) {
            buff[i] = str[i];
        }
        buff[strlen(str)] = '\0';
    }

    strcpy(str, buff);
    printf("%s\n", str);
    printf("%lu\n", strlen(str));

    return 0;
}