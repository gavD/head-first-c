#include <stdlib.h>
#include <stdio.h>

int main() {
    char name[40];
    printf("Enter your name: ");
    scanf("%39s", name);
    puts(name);


    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    printf("%s is %i years old\n", name, age);
    return 0;
}
