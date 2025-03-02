#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char old_text[201];
    fgets(old_text, sizeof(old_text), stdin);
    old_text[strlen(old_text)-1] = '\0';
    char *new_text = strdup(old_text);

    printf("Оригинал: (%s)\n", old_text);
    printf("Копия: (%s)\n", new_text);
    free(new_text);
}
