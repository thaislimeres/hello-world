#include <stdio.h>

Verifica(int a)
{
if(a>=0)
    {printf("O numero digitado e positivo\n");}
        else
            {printf("O numero digitado e negativo\n");}
}

main()
{
int num;

printf("Insira um numero inteiro: ");
scanf("%d",&num);
Verifica(num);
}
