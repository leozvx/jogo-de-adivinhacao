#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("----------------------------------\n");
    printf("---------- Bem-Vindo -------------\n");
    printf("----------------------------------\n");
    srand(time(NULL));
    int r = rand() % 40;

   int chute;
   int numerosecreto = r;
   int tentativas = 10;
    int i;

    for (i = 1; i <= 10; i++) {
 printf("Tentativa %d de %d\n",i, tentativas);
         printf("Qual e o seu chute?\n");
   scanf("%d", &chute);
   printf("Seu chute foi %d\n", chute);

    if (chute <= 0) {
        printf("Voce nao pode usar numeros negativos ou 0\n");
        continue;
    }

    if (i == 10) {
        printf("Voce perdeu !");
        break;
    }

    int acerto = (chute == numerosecreto);
   if (acerto) {
    printf("Parabens voce acertou o chute !\n");
    break;
   }
    
        else if (chute > numerosecreto) {
            printf("Seu chute foi maior que o numero secreto\n");
        }

        else  {
           printf("Seu chute foi menor que o numero secreto\n");
        }
    }
       

    printf("Cabou!\n");
    printf("Voce acertou em %d tentativas\n", i);

  

}