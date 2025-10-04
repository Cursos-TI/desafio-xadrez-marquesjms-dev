#include <stdio.h>

int main(){

//declarando as peças do jogo

//Torre cinco casas para a direita.
//Bispo cinco casas na diagonal para cima e à direita.
//Rainha oito casas para a esquerda.
//Cavalo duas casas para baixo e uma para esquerda.

int torre = 1, bispo = 1, rainha, cavalo = 1;

//Movimento Torre

while(torre <=5){
    printf("Torre --> Direita\n");
    torre ++;
}

//Movimento Bispo

do{
    printf("Bispo --> Cima Direita\n");
    bispo ++;
}while(bispo <=5);

//Movimento Rainha

for(rainha = 1; rainha <= 8; rainha ++){
    printf("Rainha --> Esquerda\n");    
}

//Movimento Cavalo

/*A ideia é que enquanto cavalo for menor que 2, o código execute dois movimentos para baixo.
Como cavalo já inicia em 1, ele executa somente uma vez, 
pois ao incrementar a condição passa a ser FALSA.*/

while (cavalo < 2){
    for (int movdown = 1; movdown <= 2; movdown++){ //variável "movdown" é o movimento para baixo
        printf("Cavalo --> Baixo\n");
    } 

    printf("Cavalo --> Esquerda\n");
    cavalo ++;
}

    return 0;
}