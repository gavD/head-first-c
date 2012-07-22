#include <stdlib.h>
#include <stdio.h>

int main() {
    int contestants[] = {3, 2, 1};
    int *choice = contestants;

    contestants[0] = 99;
    contestants[1] = contestants[2];
    contestants[2] = *choice;

    printf("I'm going to pick %i\n", contestants[2]);

    return 0;
}

