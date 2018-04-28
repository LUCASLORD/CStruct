#include <stdio.h>



int menorB(int a[3][3], int b)

{
	
    int i, j;
	
    int qtd = 0;
	
	
    
    for(i = 0; i < 3; i++)

    {
		
        for(j = 0; j < 3; j++)

	{

	    if(a[i][j] < b)

	    {

	        qtd++;

	    }

	}

    }


    return qtd;

}



int maiorC(int a[3][3], int c)

{
	
    int i, j;

    int qtd = 0;

    
    for(i = 0; i < 3; i++)

    {

        for(j = 0; j < 3; j++)

	{

	    if(a[i][j] > c)

	    {

	        qtd++;

	    }

	}

    }


    return qtd;

}


int main(void) {

    int a[3][3];
 
   int b,c;

    int i,j;

    int qtdMenorB;

    int qtdMaiorC;

  
  printf("Valor da Matriz A");

    printf("\n");

  
  for(i = 0; i < 3; i++)

    {

        for(j = 0; j < 3; j++)

  	{
  		
	    printf("Elemento [%d][%d]", i+1,j+1 );

  	    scanf("%d", &a[i][j]);

  	}
  
    }

  
  
    printf("\n");

    printf("Valor de B");

    scanf("%d", &b);


  
  printf("\n");

    printf("Valor de C");

    scanf("%d", &c);

    printf("\n");

  
  printf("Matriz Informada");

    printf("\n");

  
  for(i = 0; i < 3; i++)

    {

        for(j =0; j < 3; j++)

  	{

  	    printf("%d", a[i][j]);

  	    printf("\t");

  	    if (j == 3-1)

 	    {

  	        printf("\n");

	    }

  	}

    }


  
  qtdMenorB = menorB(a, b);

    qtdMaiorC = maiorC(a, c);


  
  printf("\n");

    printf("Quantidade de valores menores que B: %d",qtdMenorB);

    printf("\n");

    printf("Quantidade de valores maiores que C: %d",qtdMaiorC);


    return 0;

}