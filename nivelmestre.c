#include <stdio.h>

//Torre cinco casas para a direita.
//Bispo cinco casas na diagonal para cima e à direita.
//Rainha oito casas para a esquerda.
//Cavalo duas casas para cima e uma para direita.

//declarando recursividade Torre

void moverTorre(int movtorre){
    if(movtorre > 0){
        printf("Direita\n");
        moverTorre(movtorre - 1);
    }
}

//declarando recursividade Bispo

void moverBispo(int movbispo){
    if(movbispo > 0){
        printf("Cima Direita\n");
        moverBispo(movbispo - 1);
    }
}

//declarando recursividade Rainha

void moverRainha(int movrainha){
    if(movrainha > 0){
        printf("Esquerda\n");
        moverRainha(movrainha - 1);
    }
}

//parte principal

int main(){

    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    //movimento torre
    
    printf("Movimento da Torre:\n");
    moverTorre(torre);

    //movimento bispo

    printf("Movimento do Bispo:\n");
    moverBispo(bispo);

    //movimento rainha

    printf("Movimento da Rainha:\n");
    moverRainha(rainha);

    //movimento bispo Loop Aninhado

    printf("Movimento do Bispo:\n");
    for (bispo = 0; bispo < 5; bispo++)
    {
        for (int movbispo = 0; movbispo < 1; movbispo++)
        {
            printf("Direita\n");
        }
        printf("Cima\n");
    }

    //movimento cavalo

    printf("Movimento do Cavalo:\n");
    
    for (int movright = 1; movright < 2; movright++)//var movright = mov direita
    {
         for (int movup = 0; movright > movup; movright++, movup++)//var movup = mov cima
        {
            if(movup == 2)break;
            printf("Cima\n");
        }
    }printf("Direita\n");
    
    return 0;    
    
}