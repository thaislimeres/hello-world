#include <stdio.h>

main()

{

int k,cont=0,num=0;

do
    {
    printf("Insira a quantidade de termos\n");
    scanf("%i",&k);
    if(k<=0)
    {printf("Digite um valor maior que zero\n");}
    }while(k<=0);

    do
        {num=num+4;
        cont=cont+1;
        printf("1/%i ",num);
        }while(cont!=k);
}
