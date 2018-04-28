#include <stdio.h>

int main(void) {
  
    int mat[3][4]; //matriz
  
    int i,j; // controle de fluxo
  
    int qtd = 0; //quantidade de multiplos
  
    float media = 0.0; // m�dia dos multiplos
  
  
  

    printf("Matriz [3][4]");
  
    printf("\n");
  

    for (i = 0; i < 3; i++)
  
    {
  	
        for (j = 0; j < 4; j++)
  	
        {
  		
	    printf("Elemento [%d][%d]", i+1, j+1);
 
 	    scanf("%d", &mat[i][j]);

  	    if (mat[i][j] % 7 == 0 )

  	    {

                media = media + mat[i][j];

  		qtd = qtd + 1;

  	    }

        }
  
    }
  
  
  

    printf("\n");
  
    printf("Matriz Informada");
  
    printf("\n");
  

    for (i = 0; i < 3; i++)
  
    {
  	
        for (j = 0; j < 4; j++)

  	{

  	    printf("%d", mat[i][j]);

  	    printf("\t");

  	    if (j == 4-1)
 
 	    {

  	        printf("\n");
  
	    }

  	}

    }
  
    printf("\n");
  
    printf("Quantidade Encontrada de Multiplos de 7 = %d",qtd);
  
    printf("\n");
  
    printf("Media = %.2f",media/qtd);


    return 0;
}