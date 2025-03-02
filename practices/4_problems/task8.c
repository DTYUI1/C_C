#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void delete_space(char *text) {
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
    free(buff);
}

int summ(int op1, int op2) { return op1 + op2; }
int diff(int op1, int op2) { return op1 - op2; }
int mult(int op1, int op2) { return op1 * op2; }
int divd(int op1, int op2) { return op1 / op2; }


typedef int (*op_t) (int, int); // op_t - указатель на функции 
op_t action[] = // массив указателей на операцию
{
    summ, diff, mult, divd
};

char operations[] = {'+', '-', '*', '/'};

int main() {
    char buff[120];
    char *endptr;
    char oper;
    int op1, op2;
    do {
        printf("Please write your expression for calculate: ");
        fgets(buff, sizeof(buff), stdin);

        if (strlen(buff) > 0 && buff[strlen(buff)-1] == '\n') {
            buff[strlen(buff)-1] = '\0';
        }

        if (strlen(buff) == 4 && strncmp(buff, "exit", 4) == 0) {
            system("clear");
            break;
        }
        delete_space(buff);
        char *str = buff;
        
        op1 = strtod(str, &endptr);
        oper = *endptr++; // * - делает разименование и получает из адреса операнд ('+', '-', '*', '/')
        op2 = strtod(str = endptr, &endptr);

        for (int i = 0; i < 4; i++) {
            if (oper == operations[i]) {
                printf("%d\n", action[i](op1, op2));
            }
        }
    } while (1);
    printf("The end!");
    return 0;
}


