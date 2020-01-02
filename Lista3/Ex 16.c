#include <stdio.h>
main()
{
int num,num2,fat;

    do
    {printf("Insira um numero inteiro: ");
    scanf("%d",&num);
    if(num<0)
        {printf("Insira um valor maior ou igual a zero\n");}
    }while(num<0);

    num==num2;

    for(fat=1;num>1;num=num-1)
        {fat=fat*num;}

    if(num2==0 || num2==1)
        {printf("\nO fatorial e 1");}
        else

        {printf("\nO fatorial e %d",fat);
        }
}
