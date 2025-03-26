#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


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


void delete(char *text) {
    char *buff= malloc((strlen(text) + 1) * sizeof(text[0]));
    int j = -1;
    for (int i = 0; i < strlen(text); i++) {
        j++;
        if (text[i] == ' ') {
            j--;
            continue;
        }
        buff[j] = text[i];
    }
    for (int i = 0; i < strlen(text); i++) {
        text[i] = buff[i];
    }
    printf("Deleted space: \"%s\"\n", buff);
    free(buff);
}


void inverse_reg(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == tolower(text[i])) {
            text[i] = toupper(text[i]);
        } else {
            text[i] = tolower(text[i]);
        }
    }
    printf("Inverse register: \"%s\"\n", text);
    
}

void swap(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        if (isvowel(text[i])) {
            text[i] = '*';
        }
    }
    printf("Swap vowel: \"%s\"\n", text);
}

typedef void (*cmd_t) (char*); // cmd_t - указатель на функции 

cmd_t action[] = // массив указателей на комманду
{
    delete, inverse_reg, swap
};
char *operations[] = {"delete", "inverse_reg", "swap"};

int main() {
    int n;
    printf("Write the size of text: ");
    scanf("%d", &n);
    while (getchar() != '\n');
    char *str = malloc(n * sizeof(char));
    printf("The size: %d\n", n);
    printf("Write your text: ");
    fgets(str, n, stdin);
    if (strlen(str) > 0 && str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    char com[12];
    do {
        printf("Write your command (\'delete\', \'inverse_reg\', \'swap\', \'exit\'): ");
        fgets(com, sizeof(com), stdin);
        if (strlen(com) > 0 && com[strlen(com)-1] == '\n') {
            com[strlen(com)-1] = '\0';
        }

        if (strlen(com) == 4 && strncmp(com, "exit", 4) == 0) {
            system("clear");
            break;
            }
        
        for (int i = 0; i < 3; i++) {
            if (strlen(com) == strlen(operations[i]) && 
                strncmp(com, operations[i], strlen(operations[i])) == 0) {
                action[i](str);
            }    
        }
    } while (1);
    printf("The end!");
    free(str);
    return 0;
}


