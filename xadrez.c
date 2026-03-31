#include <stdio.h>

// Área de criação das funções recursivas.

void recursivaTorre(int n){
    if(n > 0){
        printf("Torre - Cima\n");
        recursivaTorre(n - 1);
        }
}

void recursivaRainha(int n){
    if(n > 0){
        printf("Rainha - Esquerda\n");
        recursivaRainha(n - 1);
        }
}

void recursivaBispo(int n){
    if(n > 0){
        printf("Bispo - Cima\n");
        recursivaBispo(n - 1);
        }
}

void recursivaBispo2(int n){
    if(n > 0){
        printf("Bispo - Direita\n");
        recursivaBispo2(n - 1);
        }
}

int main() {
    
    //Área de declarçao de variáveis com nomes apropriados.
    int torre = 5, bispo = 1, rainha = 8, cavalo, i = 0;
   

    // Implemntação da lógica de movimentação para cada peça do jogo.

    //Torre se move 5 casas para frente, usando a função recursiva.
    printf("Movimentção da torre:\n");
    recursivaTorre(torre);
    printf("\n");  
    
    //Bispo se move 5 casas na diagonal, usando a loops aninhados combinados com funções recursivas.
     printf("Movimentção do Bispo:\n");  
    for(int i = 0; i < 5; i++){
       recursivaBispo(bispo);
       for(int j = 0; j < 5; j++){
        recursivaBispo2(bispo);
        break;
       }        
    }
    printf("\n");

    //Rainha se move 8 casas para esquerda, usando a função recursiva. 
    printf("Movimentção da Rainha:\n");
    recursivaRainha(rainha);
    printf("\n");
    
    printf("\n");
    printf("\n");

     //Cavalo se move 2 casas para cima e umapara direita, usando multiplas variaveis e condição ternária.
     printf("Movimentção do Cavalo:\n");    
    for (int j = 2, cavalo = 0; cavalo <= j; cavalo++){ 
        (cavalo == 2) ? printf("Cavalo - Direita\n") : 
                        printf("Cavalo - Cima\n");
    }
   

    

    return 0;
}
