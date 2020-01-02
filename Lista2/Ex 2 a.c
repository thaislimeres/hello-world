#include <stdio.h>

main()

{

int k,num1=0,num2=0,cont=0;

do
    {printf("Insira a quantidade de termoa\n");
    scanf("%i",&k);
    if(k<=0)
    {printf("Digite um valor maior que zero\n");}
    }while(k<=0);

    do
        {num1=num1+2;
        num2=num2+5;
        printf("%i/%i ",num1,num2);
        cont=cont+1;
        }while(cont<k);

}
