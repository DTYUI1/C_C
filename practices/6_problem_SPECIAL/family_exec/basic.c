#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main ()  {
    pid_t result = fork();

    if (result == -1) {
        fprintf(stderr, "Fork() error");
        return 1;
    }

    if (result == 0) {
        execl("./superHW", "superHW", NULL);
        fprintf(stderr, "Exec() Error");
        return 1;
    } else {
        printf("Основная программа тут!!!\n");
    }
    return 0;
}