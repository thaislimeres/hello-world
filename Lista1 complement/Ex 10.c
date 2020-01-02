#include <stdio.h>

main()

{

float sex,sal;
int age;

printf("Insira a sua idade\n");

do
    {
    scanf("%i",&age);
    if(age<1 || age>120)
    {printf("Insira uma idade entre 1 e 120\n");}
    }while(age<1 || age>120);

printf("Insira o seu sexo\n");
printf("1 - homem\n");
printf("2 - mulher\n");

do
    {
    scanf("%f",&sex);
    if(sex<1 || sex>2)
    {printf("Insira 1 para mulher ou 2 para homem\n");}
    }while(sex<1 || sex>3);

printf("Insira o seu salario fixo\n");

do
    {
    scanf("%f",&sal);
    if(sal<=0)
    {printf("Insira um salario maior que 0\n");}
    }while(sal<=0);

    if(sex==1)
        {if(age>=30)
        {printf("\n");
        printf("Masculino\n");
        printf("O seu salario apos o acrescimo do abono ficara em %f\n",sal+200);
        printf("%i anos\n",age);
        }

        else
            {printf("\n");
            printf("Masculino\n");
            printf("O seu salario apos o acrescimo do abono ficara em %f\n",sal+120);
            printf("%i anos\n",age);
            }
        }

    else
        if(age>=30)
            {printf("\n");
            printf("Feminino\n");
            printf("O seu salario apos o acrescimo do abono ficara em %f\n",sal+220);
            printf("%i anos\n",age);
            }

        else
            {printf("\n");
            printf("Feminino\n");
            printf("%i anos\n",age);
            printf("O seu salario apos o acrescimo do abono ficara em %f\n",sal+130);
            }
}
