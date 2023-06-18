#include <stdio.h>

int main()
{
    int x = 0, i = 1; // x é dimensão da matriz quadrada (coluna x linha)
    
    printf("Digite a dimensao da sua matriz quadrada : ");
    scanf("%d", &x); // capta a dimensão da matriz escolhida pelo usuário
    setbuf(stdin, NULL);

     int matrizQ[x][x]; // cria a matriz com dimensão já definida
    
    for(int l = 0; l <= (x - 1); l++){

        for(int c = 0; c <= (x - 1); c++){

            matrizQ[l][c] = i; // é atribuido o valor de i para posição em questão da matriz
            i++;
        }

    } // laço para percorrer as posições da matriz e indo adicionando valores, sempre somando mais um.
    
    
    for(int l = 0; l <= (x - 1); l++){

        for(int c = 0; c <= (x - 1); c++){
            printf("%d ", matrizQ[l][c]);
        }
        
        printf("\n"); // pula uma linha toda vez que uma determinada linha da matriz é totalmente preenchida
    }// laço para percorrer as posições da matriz e indo imprimindo o conteúdo de cada posição
    
    return 0;
}



