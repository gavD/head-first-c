#include <stdlib.h>
#include <stdio.h>

int main() {
    int doses[] = {1, 3, 2, 1000};

    printf("Issue dose %i\n", doses[3]);

    printf("Dose 0 is %i\n", *doses);
    printf("Dose 1 is %i\n", *(doses + 1));
    printf("Dose 2 is %i\n", *(doses + 2));
    printf("Dose 3 is %i\n", *(doses + 3));

    return 0;
}
