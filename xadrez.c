#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    //Área de declarçao de variáveis com nomes apropriados.
    int torre = 0, bispo = 0, rainha, cavalo, i = 0;
   

    // Implemntação da lógica de movimentação para cada peça do jogo.

    //Torre se move 5 casas para frente, usando a estrutura de repetição While.
    while (torre<5)
    {
       printf("Torre - Cima\n");
       torre++;
    }
    printf("\n");  
    
    //Bispo se move 5 casas na diagonal, usando a estrutura de repetição do-While.  
    do{
       printf("Bispo - Cima, Direita\n");
       bispo++;
    }while (bispo<5);
    printf("\n");

    //Rainha se move 8 casas para esquerda, usando a estrutura de for. 
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha - Esquerda\n");
    }
    
    printf("\n");
    printf("\n");

     //Cavalo se move 1 casas para esquerda e dua para baixo, usando a estrutura de for e while em loops aninhados.    
    for (cavalo = 1; cavalo < 2; cavalo++)
    {
        printf("Cavalo - Esquerda\n");
            while (i < 2)
            {  
                printf("Cavalo - Baixo\n");
                i++;

            }
               
        
    }  

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
