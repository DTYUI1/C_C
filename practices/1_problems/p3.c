#include <stdio.h>

int main() {
    char mark;

    printf("Please, write your marking the part of the spaceship\n");
    mark = getchar();

    if (mark <= 'z' && mark >= 'a' || mark <= 'Z' && mark >= 'A') {
        printf("Marking is correct.\n");
    } else {
        printf("Marking is not correct.\n");
    }

    return 0;

}