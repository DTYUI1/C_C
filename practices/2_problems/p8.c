#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef union 
{
    int i;
    char s[3];
} Grade;

typedef struct 
{
    Grade grade;
    char type;
} MegaGrade;

int is_integer(const char *str) {
    if (str == NULL || *str == '\0' || isspace(*str)) {
        return 0; // Пустая строка или строка, начинающаяся с пробела, не число
    }

    char *endptr;
    strtol(str, &endptr, 10); // Пытаемся преобразовать в long

    // Если endptr указывает на конец строки, значит, вся строка была числом
    return (*endptr == '\0');
}

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    MegaGrade* grades = (MegaGrade*) malloc(n * sizeof(MegaGrade));
    char buf[100];
    
    for (int i = 0; i < n; i++){
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf) - 1] = '\0'; // Убираем лишний символ новой строки

        if (is_integer(buf)){
            grades[i].grade.i = atoi(buf);
            grades[i].type = 'i';
            // printf("grade %d\n",grades[i].grade.i);
        } else {
            strncpy(grades[i].grade.s, buf, 2);
            grades[i].type = 's';
            // printf("grade %s\n",grades[i].grade.s);
        }
    }
    
    system("clear");
    for (int i = 0; i < n; i++) {
        if (grades[i].type == 's'){
            printf("Grade: %s\n", grades[i].grade.s);
        } else {
            printf("Grade: %d\n", grades[i].grade.i);
        }
    }
    free(grades);

        
        
}