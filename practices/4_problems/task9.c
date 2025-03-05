#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int standart_sort(const void *a, const void *b) {
    const char * const *str_a = (const char * const *)a; // Приводим к типу char**
    const char * const *str_b = (const char * const *)b;
    return strcmp(*str_a, *str_b); // Используем strcmp для сравнения строк
}

int max_len_sort(const void *a, const void *b) {
    const char * const *str_a = (const char * const *)a;
    const char * const *str_b = (const char * const *)b;
    size_t len_a = strlen(*str_a);
    size_t len_b = strlen(*str_b);
    if (len_a > len_b) {
        return 1;
    } else if (len_a == len_b) {
        return 0;
    } else {
        return -1;
    }
}

int isvowel(char ch) {
    ch = tolower(ch);
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return 1;
        default:
            return 0;
    }
}

int vowel_sort (const void *a, const void *b) {
    const char * const *str_a = (const char * const *)a;
    const char * const *str_b = (const char * const *)b;
    int count_a = 0;
    int count_b = 0;

    for (int i = 0; (*str_a)[i] != '\0'; i++) {
        if (isvowel((*str_a)[i])) {
            count_a++;
        }
    }

    for (int i = 0; (*str_b)[i] != '\0'; i++) {
        if (isvowel((*str_b)[i])) {
            count_b++;
        }
    }

    if (count_a > count_b) {
        return 1;
    } else if (count_a == count_b) {
        return 0;
    } else {
        return -1;
    }

}

typedef int (*sort_t) (const void *, const void *); // sort_t - указатель на функции  

sort_t sort_action[] = // массив указателей на комманду
{
    standart_sort, max_len_sort, vowel_sort
};

char *modes[] = {
    "standart", "len", "vowel" 
};

int main() {
    
    int n;
    printf("Введите кол-во строк: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    char **strings = malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        printf("Введите строку %d: ", i);
        strings[i] = malloc(256);
        fgets(strings[i], 256, stdin);
        if (strlen(strings[i]) > 0 && strings[i][strlen(strings[i])-1] == '\n') {
            strings[i][strlen(strings[i])-1] = '\0';
        }
    }
    char mode[20];  
    printf("Выберите режим сортировки: \n");
    fgets(mode, sizeof(mode), stdin);
    short mode_len = strlen(mode);
    if (mode_len > 0 && mode[mode_len-1] == '\n') {
        mode[mode_len-1] = '\0';
    }
    printf("Mode: %s\n", mode);
    for (int i = 0; i < 3; i++) {
        if (strncmp(mode, modes[i], mode_len) == 0)
        {
            printf("Yes, yes\n");
            qsort(strings, n, sizeof(char *), sort_action[i]);
            break;
        } else {
            printf("Mode (%s) is not (%s)\n", mode, modes[i]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
    printf("\n"); 

    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }
    free(strings);
    return 0;
}
