#include <stdio.h>
#include <stdlib.h>

const CODE_ERROR = 98;
const CODE_EXIT = 99;

int main() {
    int count = 0;

    int nextCount = 0;

    while(1) {
        int nextCount = getNextCount();
        if(nextCount == CODE_EXIT) {
            puts("\nEnd");
            break;
        } else if(nextCount == CODE_ERROR) {
            puts("Invalid card. Value cards are 2,3,4,5,6,7,8,9,10,J,Q,K,A");
            continue;
        } else {
            count += nextCount;
        }
        printf("Card count is %i\n", count);
   }

    return 0;
}

int getNextCount() {
    
    char card_name[3];
    puts("\nEnter the card_name");
    scanf("%ss", card_name);

    return updateCount(card_name);

}

int updateCount(char card_name[]) {
    int val = getCardValue(card_name);

    if(val == CODE_EXIT) {
        return CODE_EXIT;
    }
    else if (val == CODE_ERROR) {
        return CODE_ERROR;
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
            val = CODE_EXIT; // exit condition
            break;
        default:
            val = atoi(card_name);
            if(val > 10 || val < 2) {
                return CODE_ERROR; // error condition
            }
    }

    return val;
}
