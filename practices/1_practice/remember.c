#include <stdio.h>


int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int res = max(1, 10);
    printf("%d", res);
}

