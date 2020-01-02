#include <stdio.h>

float ReajSalNovo(float antigo)
{float novo;

if(antigo<800)
    {novo=antigo*1.15;}
    else if(antigo<1000)
        {novo=antigo*1.10;}
            else
                {novo=antigo*1.05;}

return novo;
}

main()
{
float sal[10],salnovo[10],k,cont=0;

do
    {printf("Insira a quantidade de funcionarios: ");
    scanf("%f",&k);
    if(k<=0 || k>10)
        {printf("Insira um valor maior que 0 e maior ou igual a 10");}
    }while(k<=0 || k>10);

for(cont=0;cont<k;cont++)
    {do
        {printf("Insira o salario do funcionario");
        scanf("%f",&sal[cont]);
        if(sal[cont]<=0)
            {printf("Insira um valor maior que zero\n");}
        }while(sal[cont]<=0);
        printf("%g",ReajSalNovo(sal[cont]));

    }
}
