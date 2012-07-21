#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;

    int nextCount = 0;

    while(1) {
        int nextCount = getNextCount();
        count += nextCount;
        printf("Card count is %i\n", count);
        if(nextCount == 99) {
            puts("\nEnd");
            break;
        }
    }

    return 0;
}

int getNextCount() {
    
    char card_name[3];
    puts("Enter the card_name");
    scanf("%ss", card_name);

    return updateCount(card_name);

}

int updateCount(char card_name[]) {
    int val = getCardValue(card_name);

    if(val == 99) {
        return 99;
    }

    if(val >= 3 && val <= 6) {
        return 1;
    }
    else if(val >= 10) {
        return -1;
    }
    return 0;
}

int getCardValue(char card_name[]) {
    int val = 0;

    switch(card_name[0]) {
        case 'K':
            // fall through
        case 'Q':
            // fall through
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            val = 99; // exit condition
            break;
        default:
            val = atoi(card_name);
    }

    return val;
}
