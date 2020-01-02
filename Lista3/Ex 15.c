#include <stdio.h>
main()
{
int k, num=0, a=1, b=1, cont=0, soma=0;

do
    {printf("Insira a quantidade de termos: ");
    scanf("%d",&k);
    if(k<=0)
        {printf("Insira um valor maior que zero\n");}
    }while(k<=0);

    printf("%d %d ",a,b);

for(cont=0;cont<k-2;cont++)
    {num=a+b;
    printf("%d ",num);
    if(num%3==0)
        {soma+=num;}
    a=b;
    b=num;
    }
printf("\nA somatoria dos divisiveis por 3 e %d",soma);
}
