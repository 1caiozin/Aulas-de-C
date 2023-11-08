#include <stdio.h>

struct Jogador {
    char nome[30];
    char posicao;
    double forca;
};

struct Time {
    char nome[30];
    struct Jogador jgdr[11];
};

double calcularForcaTime(struct Time time) {
    double forcaTotal = 0;

    for (int i = 0; i < 11; i++) {
        char posicao = time.jgdr[i].posicao;
        double forca = time.jgdr[i].forca;

        if (posicao == 'G') {
            forcaTotal += 8.0 * forca;
        } else if (posicao == 'L') {
            forcaTotal += 10.0 * forca;
        } else if (posicao == 'Z') {
            forcaTotal += 5.0 * forca;
        } else if (posicao == 'V') {
            forcaTotal += 8.0 * forca;
        } else if (posicao == 'M') {
            forcaTotal += 11.0 * forca;
        } else if (posicao == 'A') {
            forcaTotal += 12.0 * forca;
        }
    }

    return forcaTotal / 100.0;
}

int main() {
    struct Time time1, time2;

  

    scanf("%29[^\n]%*c", time1.nome);
    for (int i = 0; i < 11; i++) {
        scanf("%29[^;]; %c; %lf%*c", time1.jgdr[i].nome, &time1.jgdr[i].posicao, &time1.jgdr[i].forca);
    }



    scanf("%29[^\n]%*c", time2.nome);
    for (int i = 0; i < 11; i++) {
        scanf("%29[^;]; %c; %lf%*c", time2.jgdr[i].nome, &time2.jgdr[i].posicao, &time2.jgdr[i].forca);
    }


    double time1Forca = calcularForcaTime(time1);
    double time2Forca = calcularForcaTime(time2);

    printf("\n%s: %.2lf de forca\n", time1.nome, time1Forca);
    printf("%s: %.2lf de forca\n", time2.nome, time2Forca);

    if (time1Forca > time2Forca) {
        printf("%s eh mais forte\n", time1.nome);
    } else if (time2Forca > time1Forca) {
        printf("%s eh mais forte\n", time2.nome);
    } else {
        printf("os times são igualmente fortes: %.2lf\n", time1Forca);
    }

    return 0;
}