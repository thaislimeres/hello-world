#include <stdio.h>

float ReaSalNovo(float antigo)
{float novo;
if(antigo<800)
    {novo=antigo*1.15;}
    else if(antigo<=1000)
        {novo=antigo*1.10;}
            else
                {novo=antigo*1.05;}

return (novo);

}

main()
{
float salario;

do
    {printf("Insira o valor do salario: ");
    scanf("%f",&salario);
    if(salario<=0)
    {printf("Insira um valor maior que zero\n");}
    }while(salario<=0);

    printf("O antigo salario e %g",salario);
    printf("\nO salario com o reajuste e %g",ReaSalNovo(salario));

}
