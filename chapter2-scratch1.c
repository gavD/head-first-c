#include <stdlib.h>
#include <stdio.h>

int outer = 1;

int main() {
    int inner = 2;
    printf("Outer is stored at %p\n", &outer);
    printf("Inner is stored at %p\n", &inner);
    return 0;
}

