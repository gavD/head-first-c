#include <stdlib.h>
#include <stdio.h>

int main() {
    char s[] = "Some string";
    char *t = s;

    printf("s is %s\n", s);
    printf("t is %s\n", t);

    printf("Sizeof s is %i\n", sizeof(s));
    printf("Sizeof t is %i\n", sizeof(t));
    printf("Sizeof *t is %i\n", sizeof(*t));

    func(s);

    return 0;
}

// every time you pass an array to a function, it decays to a pointer
// - i.e. loses its length information
int func(char s[]) {

    printf(" in func s is %s\n", s);

    printf(" in func Sizeof s is %i\n", sizeof(s));
}
