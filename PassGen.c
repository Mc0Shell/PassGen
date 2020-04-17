#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#define MAX 1000

int passgen(char passA[MAX], int len){
    int i;
    srand(time(0)); 

    printf("\n The password generated is: \n\n ");

    for(i=0; i<len; i++){
        passA[i] = 33 + rand()%89;
        printf("%c", passA[i]);
    }

    printf("\n\n");
    
    FILE * f;
    char path;
    char c1;

    printf("\n\n Save the password in a file? (Y/n) >>> ");
    fgets(&c1, 10, stdin);

    if(c1 == 'y' || c1 == 'Y'){
        f = fopen( "output.txt", "wt") ;
        fputs(passA, f);
        fclose(f);
        printf("\n\n File saved in >>> output.txt \n\n");
           
    } else if(c1 == 'n' || c1 == 'N') {
        exit(1);
    } else {
        printf("\n\n Ah. Ok down \n\n");
    }

}

int main(){
    int numc = 0;
    char pass[MAX];
    FILE *fp;

    printf("\n\n --------- PassGen by Mc0Shell --------- \n\n");
    printf(" Character number for password: ");
    scanf("%d%*c", &numc);
    
    if(numc <= 0){
        while(numc <= 0){
            printf("\n \n Error: invalid value \n");
            printf(" Reenter: ");
            scanf("%d%*c", &numc);
        }
    } else if(numc > 1000){
        while(numc > 1000){
            printf("\n \n Error: invalid value \n");
            printf(" Reenter: ");
            scanf("%d%*c", &numc);
        }
    }

    passgen(pass, numc);

    return 0;
}