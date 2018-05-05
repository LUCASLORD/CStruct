#include <stdio.h>

typedef struct
{
    char disciplina[120];
    int codigo;
    char ementa[500];
    int periodo;
    int qtdAlunos;
}curso;

void leCurso(curso curso[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
	    printf("Informe Nome da Disciplina:");
    	scanf("%s", &curso[i].disciplina);	

        printf("Informe o Codigo do Curso:");
    	scanf("%d", &curso[i].codigo);

        printf("Informe a Ementa:");
    	scanf("%s", &curso[i].ementa);
	
        printf("Informe a Periodo:");
    	scanf("%d", &curso[i].periodo);

        printf("Informe a Quantidade de Alunos:");
    	scanf("%d", &curso[i].qtdAlunos);
        printf("\n");
    }

}

void imprimeCurso(curso curso[], int n)
{

    int i;

    printf("\n");
    printf("Listagem das Disciplinas");
    printf("\n\n");

    for(i = 0; i < n; i++)
    {
        printf("Disciplina: %s", curso[i].disciplina);
        printf("\n");

        printf("Codigo: %d", curso[i].codigo);
        printf("\n");

        printf("Ementa: %s", curso[i].ementa);
        printf("\n");

        printf("Periodo: %d",curso[i].periodo);
        printf("\n");

        printf("Quantidade Alunos %d", curso[i].qtdAlunos);
        printf("\n\n");
    }
}

void disciplinaQuarto(curso curso[], int n)
{

    int i;

    printf("Disciplinas oferecidas at� quarto Periodo");
    printf("\n");

    for(i = 0; i < n; i++)
    {
        if(curso[i].periodo <= 4)
        {
            printf("%s", curso[i].disciplina);
            printf("\n");
        }
    }
}

void menosAlunos(curso curso[], int n)
{
    int i;
    int menor = curso[0].qtdAlunos;
    int pos;

    printf("\n");
    printf("Discplina com Menos Alunos");
    printf("\n");
    printf("\n");

    for(i = 0; i < n; i++)
    {
        if(curso[i].qtdAlunos <= menor)
        {
            menor = curso[i].qtdAlunos;
            pos = i;
        }
    }

    printf("A Discplina '%s' tem a menor quantidade de aluno(s) com %d aluno(s)", curso[pos].disciplina, menor);
    printf("\n");
}

int main(void) {

    curso curso[2];

    leCurso(curso, 2);
    imprimeCurso(curso, 2);
    disciplinaQuarto(curso, 2);
    menosAlunos(curso, 2);

    return 0;
}