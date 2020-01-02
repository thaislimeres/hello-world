#include <stdio.h>
main()
{
int idade=1,genero,quantlivros,cont=0,soma=0,contm5=0,conth5=0,contnaoleu=0;

for(cont=0;idade>=0;cont++)
    {printf("Qual o seu genero?\n");
    printf("Digite 0 para homem, 1 para mulher e 2 para outros\n");
    scanf("%d",&genero);

    printf("Qual a sua idade?\n");
    scanf("%d",&idade);

    printf("Quantos livros leu ano passado?\n");
    scanf("%d",&quantlivros);

    if(idade<10)
        {soma+=quantlivros;
        }
    if(genero==1 && quantlivros>=5)
        {contm5++;
        }
    if(genero==0 && quantlivros>5)
        {conth5++;
        }
    if(quantlivros<=0)
        {contnaoleu++;
        }
    }

    printf("\nA quantidade total de livros lidos por menores de 10 anos e %d",soma);
    printf("\nA quantidade de mulheres que leram 5 livros ou mais e %d",contm5);
    printf("\nA media de idade dos homens que leram menos que 5 livros e %d",conth5);
    printf("\nO percentual de pessoas que nao leram livros e %d",contnaoleu/cont);
}
