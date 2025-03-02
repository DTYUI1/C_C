#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Artwox";
    char copy[10];
    char cnpy[4];

    strcpy(copy, str);
    printf("Just a simple copy %s\n", copy);
    copy[9] = '\0'; 
    strncpy(cnpy, str, sizeof(cnpy)-1);
    cnpy[3] = '\0';    
    printf("Concrete copy is %s", cnpy);


}