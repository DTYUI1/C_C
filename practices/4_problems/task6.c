#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void reverse(char *text) {
    char *buff= malloc((strlen(text) + 1) * sizeof(text[0]));
    for (int i = 0; i < strlen(text); i++) {
        buff[i] = text[strlen(text)-1-i];
    }
    for (int i = 0; i < strlen(text); i++) {
        text[i] = buff[i];
    }
    printf("Reverse: \"%s\"\n", text);
    free(buff);
}

void upper(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        text[i] = toupper(text[i]);
    }
    printf("Upper: \"%s\"\n", text);
}

void lower(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        text[i] = tolower(text[i]);
    }
    printf("Lower: \"%s\"\n", text);
    
}


typedef void (*cmd_t) (char*); // cmd_t - указатель на функции 

cmd_t action[] = // массив указателей на комманду
{
    reverse, lower, upper
};


char *operations[] = {"reverse", "lower", "upper"};
int main() {
    char str[100];
    printf("Write your text: ");
    fgets(str, sizeof(str), stdin);
    if (strlen(str) > 0 && str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    char com[10];
    do {
        printf("Write your command (\'reverse\', \'lower\', \'upper\', \'exit\'): ");
        fgets(com, sizeof(com), stdin);
        if (strlen(com) > 0 && com[strlen(com)-1] == '\n') {
            com[strlen(com)-1] = '\0';
        }

        if (strlen(com) == 4 && strncmp(com, "exit", 4) == 0) {
            system("clear");
            printf("The end!");
            return 0;
        }
        
        for (int i = 0; i < 3; i++) {
            if (strlen(com) == strlen(operations[i]) && 
                strncmp(com, operations[i], strlen(operations[i])) == 0) {
                action[i](str);
            }    
        }
    } while (1);

    // reverse(str);
    // printf("Reverse: \"%s\"\n", str);
    // upper(str);
    // printf("Upper: \"%s\"\n", str);
    // lower(str);
    // printf("Lower: \"%s\"\n", str);
}


