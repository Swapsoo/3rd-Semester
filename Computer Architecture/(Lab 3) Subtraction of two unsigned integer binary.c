#include <stdio.h>

int main() {
    int numa[4], numb[4], diff[4];
    int i;

    printf("ENTER THE FIRST NUMBER (4 bits): ");
    for (i = 0; i < 4; i++) {
        scanf("%1d", &numa[i]);
    }

    printf("ENTER THE SECOND NUMBER (4 bits): ");
    for (i = 0; i < 4; i++) {
        scanf("%1d", &numb[i]);
    }

    int borrow = 0;
    for (i = 3; i >= 0; i--) {
        diff[i] = numa[i] - numb[i] - borrow;

        if (diff[i] < 0) {
            diff[i] += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }
    }

    printf("\nTHE DIFFERENCE IS: ");
    for (i = 0; i < 4; i++) {
        printf("%d", diff[i]);
    }
    printf("\n");

    return 0;
}
