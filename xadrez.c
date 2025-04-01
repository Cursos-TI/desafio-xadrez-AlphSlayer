#include <stdio.h>

//Declaração das variáveis e da posição inicial das peças
int peca, i=0;
int torre = 11, bispo = 31, rainha = 58;

//A cada movimento vertical soma 10 ou subtrai 10
//A cada movimento horizontal soma 1 ou subtrai 1

int main () {

    //Demonstração do Tabuleiro
    printf("Posição inicial das peças:\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("80 |   81    |   82    |   83    |   84    |   85    |   86    |   87    |   88    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("70 |   71    |   72    |   73    |   74    |   75    |   76    |   77    |   78    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("60 |   61    |   62    |   63    |   64    |   65    |   66    |   67    |   68    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |  Rainha |\n");
    printf("50 |   51    |   52    |   53    |   54    |   55    |   56    |   57    |   58    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("40 |   41    |   42    |   43    |   44    |   45    |   46    |   47    |   48    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |  Bispo  |         |         |         |         |         |         |         |\n");
    printf("30 |   31    |   32    |   33    |   34    |   35    |   36    |   37    |   38    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("20 |   21    |   22    |   23    |   24    |   25    |   26    |   27    |   28    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |  Torre  |         |         |         |         |         |         |         |\n");
    printf("10 |   11    |   12    |   13    |   14    |   15    |   16    |   17    |   18    |\n");
    printf("   |         |         |         |         |         |         |         |         |\n");
    printf("   ---------------------------------------------------------------------------------\n");
    printf("   |    1    |    2    |    3    |    4    |    5    |    6    |    7    |    8    |\n");

    //Menu
    printf("Selecione o movimento desejado:\n\n");
    printf(" 1 - Torre - 5 casas para direita.\n");
    printf(" 2 - Bispo - 5 casas na diagonal para cima e à direita\n");
    printf(" 3 - Rainha - 7 casas para a esquerda.\n"); 
    printf("Escolha: ");
    scanf("%d",&peca);


    //Movimentação das peças
    switch (peca)
    {
        case 1:
            printf("A torre está na casa %d\n",torre);
            while (i<5) // Movimento horizontal
                {
                torre = torre + 1;
                printf("Direita\n");
                i++;
                }
            printf("A torre moveu-se para a casa %d\n",torre);    
            i=0;
        break;

        case 2:
            printf("O Bispo está na casa %d\n",bispo);
            for (i=0; i<5; i++)//movimento horizontal e vertical
                {
                bispo = bispo + 1;
                bispo = bispo + 10;
                printf("Direita e Cima\n");
                }
          
            printf("O Bispo moveu-se para a casa casa %d",bispo);
            i=0;

        break;

        case 3:
            printf("A Rainha está na casa %d\n",rainha);
           do
           {
            rainha = rainha - 1;
            printf("Esquerda\n");
            i++;           } 
            
            while (i < 7); // Movimento horizontal
                printf("A Rainha moveu-se para a casa %d\n",rainha);
        break;
    
    default:
            printf("Selecione um dos movimentos disponíveis!\n");
        break;
    }

return 0;
}
