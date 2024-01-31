#include <stdio.h>

int main() 
{
    // Genera un numero casuale compreso tra 1 e 100
    int numeroDaIndovinare = rand() % 100 + 1;

    int tentativo, punteggio = 0;

    printf("Benvenuto al gioco dell'indovina numero!\n");
    printf("Indovina il numero compreso tra 1 e 100.\n");

    do {
        // Chiede all'utente di inserire un numero
        printf("Inserisci il tuo tentativo: ");
        scanf("%d", &tentativo);

        // Incrementa il punteggio se il tentativo è corretto
        if (tentativo == numeroDaIndovinare) {
            punteggio++;
            printf("Complimenti! Hai indovinato. Punteggio attuale: %d\n", punteggio);

            // Genera un nuovo numero casuale per la prossima partita
            numeroDaIndovinare = rand() % 100 + 1;
        } else {
            printf("Spiacenti, il tuo tentativo non è corretto. Riprova.\n");
        }

    } while (1); // Il gioco continua all'infinito, l'utente può interromperlo manualmente

    return 0;
}