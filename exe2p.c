#include <stdio.h>

int procuraR(char cidade[10][120])
{
    int qtd = 0;
    int i, j

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(cidade[i][j] == 'R')
            {
                qtd++;
            }		
        }
    }

    return qtd;
}

int main(void) {

    char cidade [10][120];
    int i;
    int qtd = 0;
 
    printf("\n");
    printf("Matriz Nome de Cidades");
    printf("\n");

    for (i = 0; i < 5; i++)
    { 
        printf ("\n\nDigite uma Cidade: ");
        fflush(stdin);
        gets(cidade[i]);
    }
   
    qtd = procuraR(cidade);
  
    printf("\n");
    printf("Quantidade de 'R' encontrado = %d", qtd);

    return(0);
}