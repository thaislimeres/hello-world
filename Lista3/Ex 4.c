#include <stdio.h>

main()
{
int alunos,contn6=0;
float notas,soma=0,cont=0;

do
    {printf("Insira a quantidade de alunos na sala: ");
    scanf("%i",&alunos);
    printf("\n");
    if(alunos<=0)
        {printf("Insira um valor maior que zero\n\n");}
    }while(alunos<=0);

    do
        {printf("Insira a nota do %i aluno: ",cont+1);
        scanf("%f",&notas);
        if(notas<0)
            {printf("Insira uma nota igual ou maior que zero\n");}
        while(notas<0);
        cont++;
        soma+=notas;
        if(notas>=6)
            {contn6++;}
        }while(cont<alunos);

printf("\nA media da turma e %f",soma/cont);
printf("\nA quantidade de notas maiores ou iguais a 6 digitadas e %i",contn6);
}
