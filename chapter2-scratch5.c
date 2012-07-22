#include <stdlib.h>
#include <stdio.h>

void skip(char *msg) {
    int i = 0;
    while(i <= 6) {
        puts(msg + i);
        i++;
    }
}

int main() {
    char *msg_from_amy = "Don't call me";
    skip(msg_from_amy);
    return 0;
}
