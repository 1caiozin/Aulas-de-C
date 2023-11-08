#include <stdio.h>

int main() {
    int nmr = 10, vtr[10];

    for (int i = 0; i < nmr; i++) {
        scanf("%d", &vtr[i]);
    }

    while (nmr > 1) {
        for (int i = 0; i < nmr; i++) {
            printf("%d", vtr[i]);

            if (i < nmr - 1) {
                printf(" ");
            }
        }

        printf("\n");

    for (int i = 0; i < nmr - 1; i++) {
            vtr[i] += vtr[i + 1];
        }
        nmr = nmr - 1;
    }

    printf("%d\n", vtr[0]);

    return 0;
}