#include <stdio.h>



typedef struct

{
	
    char nomeAluno[120];

    int matricula;
	
    char email[50];
	
    int periodo;
	
    char curso[30];
	
    float notaFinal;

}turma;



void leVetorturma(turma turma[], int n)

{
	
    int i;
    for(i = 0; i < n; i++)
	
    {

        printf("Informe Nome do  Aluno:");
    	
        scanf("%s", &turma[i].nomeAluno);

    	
printf("Informe a Matricula:");

    	scanf("%d", &turma[i].matricula);

    	
printf("Informe o Email:");

    	scanf("%s", &turma[i].email);

    	
printf("Informe a Periodo:");

    	scanf("%d", &turma[i].periodo);

    	
printf("Informe Curso:");

    	scanf("%s", &turma[i].curso);

    	
printf("Informe a Nota Final:");

    	scanf("%f", &turma[i].notaFinal);

    	printf("\n");

    }

}



void imprimeTurma(turma turma[], int n)

{
	
    int i;

	
    printf("\n");
	
    printf("Listagem dos Alunos");
	
    printf("\n\n");
	
	

    for(i = 0; i < n; i++)

    {

        printf("Nome: %s", turma[i].nomeAluno);

	printf("\n");

	printf("Matricula: %d", turma[i].matricula);

	printf("\n");

	printf("Email: %s", turma[i].email);

	printf("\n");

	printf("Periodo: %d",turma[i].periodo);

	printf("\n");

	printf("Cusro: %s",turma[i].curso);

	printf("\n");

	printf("Nota Final %.2f", turma[i].notaFinal);

	printf("\n\n");

    }

}



void nomeAprovados(turma turma[], int n)

{
	
    int i;

    printf("Nome dos Aprovados no Curso");
	
    printf("\n\n");

	
    for(i = 0; i < n; i++)

    {

        if(turma[i].notaFinal >= 60)

	{

	    printf("%s", turma[i].nomeAluno);

	    printf("\n");

	}

    }

}



void maiorMedia(turma turma[], int n)

{

    int i;
	
    float maior = 0.0;
	
    int pos;


    printf("\n");
	
    printf("Maior Média da Turma");
	
    printf("\n");
	
	
    
    for(i = 0; i < n; i++)

    {

        if(turma[i].notaFinal >= maior)

	{

	    maior = turma[i].notaFinal;

	    pos = i;

	}

    }


    printf("O Aluno %s teve a maior media da turma = %.2f", turma[pos].nomeAluno, maior);

    printf("\n");

}



int main(void) {

    turma turma[40];
    
    
    
    leVetorturma(turma, 40);
    
    imprimeTurma(turma, 40);
    
    nomeAprovados(turma, 40);
    
    maiorMedia(turma, 40);
	
    return 0;

}