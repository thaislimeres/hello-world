#include <stdio.h>
main()
{
int k=0,num=1,soma=0,media=0,cont,contp=0;

while(k<=0)
    {printf("Insira a quantidade de numeros pares desejada: ");
    scanf("%i",&k);
    }

    for(cont=1;contp<k;cont++)
        {if(num%2==0 && num%5==0)
            {printf("%i ",num);
            contp++;
            soma+=num;
            }
        num++;
        }

        printf("\nA media dos %i primeiros numeros pares e multiplos de cinco e %i",k,soma/contp);
}
