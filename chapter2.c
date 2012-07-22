#include <stdlib.h>
#include <stdio.h>

void go_south_east(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main() {
    int latitude = 32;
    int longitude = -64;
    printf("Start at: [%i, %i]\n", latitude, longitude);

    int *address_of_latitude = &latitude;
    int *address_of_longitude = &longitude;

    go_south_east(address_of_latitude, address_of_longitude);
    printf("Now at: [%i, %i]\n", latitude, longitude);
    return 0;
}

