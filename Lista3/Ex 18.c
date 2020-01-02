#include <stdio.h>
main()
{
int k, num=1, cont=0;

    do
        {printf("Insira a quantidade de termos: ");
        scanf("%d",&k);
        if(k<=0)
            {printf("Insira um valor maior que zero\n");}
        }while(k<=0);

    for(cont=0;cont<k;cont++)
        {printf("%d ",num);
        num=num+1;
        }
}
