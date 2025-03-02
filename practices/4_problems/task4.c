#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){ 
    char code[] = "launch-2025";

    char enter_code[101];
    fgets(enter_code, sizeof(enter_code), stdin);
    enter_code[strlen(enter_code)] = '\0'; 

    for (int i = 0; i < strlen(enter_code); i++){
        enter_code[i] =  tolower(enter_code[i]);
    }
    
    if (strncmp(code, enter_code, strlen(code)) == 0) {
        printf("Код принят");
    } else {
        printf("Код не принят");
    }
    return 0;

}
