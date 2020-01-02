#include <stdio.h>
main()
{
int num=0,num1=2,cont=2;

do
    {printf("Insira um numero\n");
    scanf("%i",&num);
    printf("\n");
    if(num<2)
        {printf("Insira um valor maior que dois\n");}
    }while(num<2);

do
    {if(num1%2==0)
        {printf("%i\n",num1);}
    cont++;
    num1++;
    }while(num1<=num);
}
