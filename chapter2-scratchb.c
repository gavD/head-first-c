#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my wallet in El Segundo",
    "Root Down",
    "Mixmaster Mike",
    "Enter Sandman",
    "Hello world"
};

void find_track(char search_for[]) {
    int i;
    for(i = 0; i < 5; i++) {
        printf("Check %i: '%s' for '%s'\n", i, tracks[i], search_for);
        if(strstr(tracks[i], search_for)) {
            printf("Found at %i: %s\n", i, tracks[i]);
        }
    }
}

int main() {
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);

    // hack to get rid of trailing \n
    char *pos;
    if ((pos=strchr(search_for, '\n')) != NULL) {
        *pos = '\0';
    }

    find_track(search_for);
    return 0;
}
