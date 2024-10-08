#include <stdio.h>

int main(void) {
    int tentativi = 10;
    int tentativiCorrenti = 10;
    int risposta;

    printf("**************************************************\n");
    printf("Quando e iniziata la seconda guerra mondiale?\n");
    printf("**************************************************\n");
    printf("\n");

    printf("**************************************************\n");
    printf("Numero tentativi totali a disposizione: [%d]\n", tentativi);
    printf("**************************************************\n");

    printf("\n");

    for (int i = 0; i < tentativi; i++) {
        risposta = 0;
        printf("Inserire risposta:\n");
        scanf("%d", &risposta);


        if (risposta == 1939) {
            printf("Risposta esatta\n");
            break;
        }

        if (risposta != 1939) {
            tentativiCorrenti--;
            printf("Risposta sbagliata riprovare\n");
            printf("\n");
            printf("**************************************************\n");
            printf("Tentavi correnti: %d \n", tentativiCorrenti);
            printf("**************************************************\n");
        }

        if (tentativiCorrenti == 0) {
            printf("Tentativi esauriti\n");
        }


    }
    return 0;
}
