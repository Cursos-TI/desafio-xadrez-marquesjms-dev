#include <stdio.h>

int main(){

//declarando as peças do jogo

//Torre cinco casas para a direita.
//Bispo cinco casas na diagonal para cima e à direita.
//Rainha oito casas para a esquerda.

int torre = 1, bispo = 1, rainha;

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
    return 0;
}