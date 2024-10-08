#include <stdio.h>

int main(void) {

    const int tentativi = 10;
    int risposta;

    printf("**************************************************\n");
    printf("Quando e iniziata la seconda guerra mondiale?\n");
    printf("**************************************************\n");
    printf("\n");

    printf("**************************************************\n");
    printf("Numero tentativi a disposizione: [%d]\n");
    printf("**************************************************\n");

    for (int i = 0; i < tentativi; i++) {
        risposta = 0;
        printf("Inserire risposta:\n");
        scanf("%d", &risposta);
        if(risposta == 1939) {
            printf("Risposta esatta\n");
            break;
        }

        if(risposta != 1939) {
            printf("Risposta sbagliata riprovare\n");
        }
    }



    return 0;
}
