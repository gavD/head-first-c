#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char s0[] = "this is a test of strstr";
    char s1[] = "test";

    int *result = strstr(s0, s1);

    if(result) {
        printf("Found at %i\n", result);
    } else {
        puts("Not found");
    }

    return 0;
}
