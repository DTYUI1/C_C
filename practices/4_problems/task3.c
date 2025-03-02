#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char buff[101];
    fgets(buff, sizeof(buff), stdin);
    buff[strlen(buff)] = '\0';
    
    char *cosmoman = strtok(buff, ";");

    while (cosmoman != NULL) {
        printf("%s\n", cosmoman);
        cosmoman = strtok(NULL, ";");
    }

    return 0;
}


