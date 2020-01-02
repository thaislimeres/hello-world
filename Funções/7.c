#include <stdio.h>

float MediaFibonacci(int s, int t)
{float result;

result=(float)(2+s)/t;

return result;
}

main()
{int k, a=1, b=1, c=0,soma=0, cont=0;

do
{printf("Insira a quantidade de termos: ");
scanf("%d",&k);
if(k<=0)
    {printf("Insira um valor maior que zero\n");}
}while(k<=0);

printf("%d %d ",a=1,b=1);

for(cont=0;cont<k-2;cont++)
{c=a+b;
printf("%d ",c);
soma+=c;
a=b;
b=c;
}

printf("\nA media dos termos da sequencia e %g",MediaFibonacci(soma,k));

}
