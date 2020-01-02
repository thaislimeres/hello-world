#include <stdio.h>
main()
{
int A[6],cont,soma=0;

do
    {for(cont=0;cont<6;cont++)
        {do
            {printf("Insira o %do numero: ",cont+1);
            scanf("%d",&A[cont]);
            if(A[cont]>=0)
                {printf("Insira um valor menor que zero\n");}
            }while(A[cont]>=0);
        soma+=A[cont]*A[cont];
        }
    if(soma<1000)
        {printf("Insira novos dados\n\n");}
    }while(soma<1000);

    printf("A soma dos quadrados e %d",soma);
}
