#include <stdio.h>

ParImpar(int numero)
{
if(numero%2==0)
    {printf("O numero e par\n");}
        else
            {printf("O numero e impar\n");}
}

main()
{int num;

printf("Insira um numero inteiro: ");
scanf("%d",&num);

ParImpar(num);

printf("O numero inserido e %d",num);
}
