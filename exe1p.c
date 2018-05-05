#include <stdio.h>

int produtoMatriz(int a[5][5])
{
    int i, j;
    int pdt = 1;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(a[i][j] % 6 == 0)
            {
                pdt = pdt * a[i][j];
            }
        }
    }

    return pdt;
}

int main(void) {

    int a[5][5];
    int i, j;
    int pdt = 0;

    printf("Valor da Matriz");

    printf("\n");
 
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Elemento [%d][%d]", i+1,j+1 );
            scanf("%d", &a[i][j]);
        }
    }
  
    printf("Matriz Informada");
    printf("\n");
  
    for(i = 0; i < 5; i++)
    {
        for(j =0; j < 5; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
            if (j == 5-1)
            {
                printf("\n");
            }
        }
    }

    pdt = produtoMatriz(a);

    printf("\n");
    printf("O produto dos elementos divisiveis por 6: %d",pdt);
    printf("\n");
    
    return 0;

}