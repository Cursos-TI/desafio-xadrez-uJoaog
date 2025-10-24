#include <stdio.h>

//Movimento Torre
void moverTorre(int casas) {
    if (casas == 0) return; 

    printf("Direita\n");
    moverTorre(casas - 1); 
}


//Movimento Bispo
void moverBispo(int casas) {
    if (casas == 0) {
    return;
}

    // Loop externo: movimento vertical (Cima)
    for (int i = 1; i <= 1; i++) {
        printf("Cima\n");

        // Loop interno: movimento horizontal (Direita)
        for (int j = 1; j <= 1; j++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva
    moverBispo(casas - 1);
}

//Movimento Rainha
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main(){

int peca, casa;

//Entrada de dados da peça escolhida
   do { 
    printf("Peça a ser escolhida:\n");
    printf("1 para Torre\n");
    printf("2 para Bispo\n");
    printf("3 para Rainha\n");
    printf("4 para Cavalo\n");
    printf("O programa não será iniciado até que seja enviado um número valido\n");
    printf("Escolha a peça a ser movida:\n");
    scanf("%d", &peca);
    } while (peca < 1 || peca > 4);

    //Entrada de dados de quantidade de casas escolhidas
if (peca == 1)
{
    printf("Peça escolhida: Torre\n");
    printf("\n");

    int casa = 5;
    printf("A Torre vai andar esse numero de casas: %d\n", casa);
    printf("\n");

    moverTorre(casa);

}
    //Entrada de dados de quantidade de casas escolhidas
else if (peca == 2)
{
    printf("Peça escolhida: Bispo\n");
    printf("\n");
    
    int casa = 5;
    printf("O Bispo vai andar esse numero de diagonais: %d\n", casa);
    printf("\n");


    moverBispo(casa);
}
    //Entrada de dados de quantidade de casas escolhidas
else if(peca ==3)
{
    printf("Peça escolhida: Rainha\n");
    printf("\n");
    
    int casa = 8;
    printf("A Rainha vai andar esse numero de casas: %d\n", casa);
    printf("\n");
    moverRainha(casa);
}
else{
    printf("Peça escolhida: Cavalo\n");
    printf("\n");
    
     for(int i = 1; i <= 2; i++)
    {
        printf("Cima\n");

        if (i == 2) {
            for (int j = 1; j <= 3; j++) {
                
                if (j == 2) {
                    continue; 
                }
                if (j > 1) {
                    break; 
                }

                printf("Direita\n");
            }
        }
    }
}

return 0;
}