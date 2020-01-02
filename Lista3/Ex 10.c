#include <stdio.h>
main()
{
int num1,num2,cont,soma=0,produto=1;

do
    {printf("Insira dois numeros: ");
    scanf("%i %i",&num1,&num2);
    if(num1=num2)
        {printf("Insira numeros diferentes\n");}
    }while(num1=num2);

if(num1<num2)
    {for(cont=num1;cont<=num2;cont++)
        {if(cont%2==0)
            {soma+=cont;}
            else
                {produto*=cont;}
        }
    }
    else
        if(num1>num2)
            {for(cont=num1;cont>=num2;cont--)
                {if(cont%2==0)
                    {soma+=cont;}
                    else
                        {produto*=cont;}
                }
            }
printf("\nA soma dos numeros pares desse intervalo e %i",soma);
printf("\n\nO produto dos numeros impares desse invervalo e %i",produto);
printf("\n");
}
