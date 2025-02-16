#include <stdio.h>
#include <stdlib.h>

typedef union
{
    int i;
    char str[80];
    float f;
} un;


int main(){
    short choice;
    un Data; 
    scanf("%hd", &choice);
    
    if (choice == 1){
        scanf("%d", &Data.i);
        system("clear");
        printf("Integer: %d", Data.i);
    } else if (choice == 2) {
        scanf("%f", &Data.f);
        system("clear");
        printf("Float: %.2f", Data.f);
    } else if (choice == 3) {
        scanf("%s", &Data.str);
        system("clear");
        printf("String: %s", Data.str);
    }

    
}
