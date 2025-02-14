#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;

    currentTime = time(NULL);
    if (currentTime == (time_t)(-1)) {
        perror("Ошибка получения времени");
        return 1;
    }
    localTime = localtime(&currentTime);

    if (localTime == NULL) {
        perror("Ошибка преобразования времени");
        return 1;
    }

    printf("Current date: %d.%d.%d\n",
           localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);


}
