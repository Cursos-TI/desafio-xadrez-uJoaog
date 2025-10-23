#include <stdio.h>

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

       do { 
    printf("Casas a serem andadas a direita:\n");
    printf("1 para 1 casa\n");
    printf("2 para 2 casas\n");
    printf("3 para 3 casas\n");
    printf("4 para 4 casas\n");
    printf("5 para 5 casas\n");
    printf("O programa não será iniciado até que seja enviado um número valido\n");
    scanf("%d", &casa);
    } while (casa < 1 || casa > 5);
    printf("A Torre vai andar esse numero de casas: %d\n", casa);

    //Contador de movimento
    int i = 0;

    do{
        printf("Para a Direita\n");
        i++;
    } while (i < casa);
    
}
    //Entrada de dados de quantidade de casas escolhidas
else if (peca == 2)
{
    printf("Peça escolhida: Bispo\n");
    printf("\n");
    do { 
    printf("Casas a serem andadas para cima e á direita:\n");
    printf("1 para 1 casa\n");
    printf("2 para 2 casas\n");
    printf("3 para 3 casas\n");
    printf("4 para 4 casas\n");
    printf("5 para 5 casas\n");
    printf("O programa não será iniciado até que seja enviado um número valido\n");
    scanf("%d", &casa);
    } while (casa < 1 || casa > 5);
    printf("O Bispo vai andar esse numero de casas: %d\n", casa);

    //Contador de movimento
    int i = 0;

    do{
        printf("Para Cima e para Direita\n");
        i++;
    } while (i < casa);
}
    //Entrada de dados de quantidade de casas escolhidas
else if(peca ==3)
{
    printf("Peça escolhida: Rainha\n");
    printf("\n");
    do { 
    printf("Casas a serem andadas à esquerda:\n");
    printf("1 para 1 casa\n");
    printf("2 para 2 casas\n");
    printf("3 para 3 casas\n");
    printf("4 para 4 casas\n");
    printf("5 para 5 casas\n");
    printf("6 para 6 casas\n");
    printf("7 para 7 casas\n");
    printf("8 para 8 casas\n");
    printf("O programa não será iniciado até que seja enviado um número valido\n");
    scanf("%d", &casa);
    } while (casa < 1 || casa > 8);
    printf("A Rainha vai andar esse numero de casas: %d\n", casa);

    //Contador de movimento
    int i = 0;

    do{
        printf("Para a Esquerda\n");
        i++;
    } while (i < casa);
}
else{
    printf("Peça escolhida: Cavalo\n");
    printf("\n");
    
    for (int i = 0; i < 2; i++){
        printf("Para Baixo\n");

        if(i == 1){
            int j = 0;
            do {
                printf("Para a Esquerda\n");
                j++;
            } while (j < 1);
        }
    }
}

return 0;
}