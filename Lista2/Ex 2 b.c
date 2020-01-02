#include <stdio.h>
#include <math.h>

main()

{

int k,cont,num1=0,num2=0;

do
    {printf("Insira a quantidade de termos\n");
    scanf("%i",&k);
    if(k<=0)
    printf("Digite um valor maior que zero\n");
    }while(k<=0);

/*
    do
            {
            num1+=2;
            num2+=8;
            cont++;
            printf("%i/%i ",num1*num1,num2);
            }while(cont<k);
*/

    for(cont=0;cont<k;cont++)
    {num1+=2;
    num2+=8;
    printf("%i/%i ",num1*num1,num2);
    }
}
