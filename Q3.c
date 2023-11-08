#include <stdio.h>
#include <string.h>

int main() {
    int mtzA[4][4], mtzB[4][4], Vfinal[4][4];
    char oprc[5];

  
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &mtzA[linha][coluna]);
        }
    }

    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &mtzB[linha][coluna]);
        }
    }


    scanf("%s", oprc);

    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            if (strcmp(oprc, "soma") == 0) {
                Vfinal[linha][coluna] = mtzA[linha][coluna] + mtzB[linha][coluna];
            } else if (strcmp(oprc, "sub") == 0) {
                Vfinal[linha][coluna] = mtzA[linha][coluna] - mtzB[linha][coluna];
            } else if (strcmp(oprc, "mult") == 0) {
                Vfinal[linha][coluna] = 0;
                for (int operMult = 0; operMult < 4; operMult++) {
                    Vfinal[linha][coluna] += mtzA[linha][operMult] * mtzB[operMult][coluna];
                }
            }
        }
    }


    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%4d", Vfinal[linha][coluna]);
        }
        printf("\n");
    }
    

    return 0;
}