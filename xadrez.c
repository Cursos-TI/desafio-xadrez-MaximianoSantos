#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    //Área de declarçao de variáveis com nomes apropriados.
    int torre = 0;
    int bispo = 0;
    int rainha;

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
    
    
    


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
