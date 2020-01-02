#include <stdio.h>

main()

//VF = Valor de fabrica
//PL = Percentual de lucro
//PI = Percentual do imposto

{
float VF,PL,PI;

printf("Digite o valor do veiculo\n");

do
    {scanf("%f",&VF);
    if(VF<=0)
    {printf("Insira um valor valido\n");}
    }while(VF<=0);

printf("Insira o percentual de lucro do distribuidor\n");

do
    {scanf("%f",&PL);
    if(PL<=0)
    {printf("Insira um valor valido\n");}
    }while(PL<=0);

printf("Insira o percentual de impostos\n");

do
    {scanf("%f",&PI);
    if(PI<=0)
    {printf("Insira um valor valido\n");}
    }while(PI<=0);

printf("O lucro do distribuidor e %f\n",PL*VF);
printf("O total de impostos e %f\n",VF*PI);
printf("O preco final do veiculo e %f\n",VF+(PL*VF)+(VF*PI));
}
