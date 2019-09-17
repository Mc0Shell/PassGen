#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand((unsigned int)(time(NULL)));
    int i,x,q;
    char pass[12];

    printf("\n Scegliere il numero di password da generare: ");
    scanf("%d", &q);
    printf(" Premi [invio] per avviare la generazione\n\n");
    getchar();


        while(x<q){
            printf(" ");
            for (i = 0; i < 4; i++) {
                pass[i] = rand() % 9;
                char capLetter = 'A' + (rand() % 26);
                pass[i + 2] = capLetter;
                char letter = 'a' + (rand() % 26);
                pass[i + 3] = letter;
                pass[i + 4] = 33 + rand() % 94;
                printf("%d%c%c%c", pass[i], pass[i + 2], pass[i + 3], pass[i + 4]);
            }
            printf("\n");
            x++;
        }

    printf("\n Password generate: %d\n\n", q);
}

