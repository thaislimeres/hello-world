#include <stdio.h>
main()
{
int A[10],cont=0,contmaior=0,maior=0;

for(cont=0;cont<10;cont++)
    {do
        {printf("Insira o %do numero: ",cont);
        scanf("%d",&A[cont]);
        }while(A[cont]<=0);
    if(cont==0 || A[cont]>maior)
        {maior=A[cont];
        contmaior=1;
        }
        else if(maior==A[cont])
            {contmaior++;}
    }

    for(cont=0;cont<10;cont++)
        {printf("%d ",A[cont]);}
        if(contmaior==1)
            {printf("\nO maior numero e %d e foi digitado %d vez",maior,contmaior);}
            else
                {printf("\nO maior numero e %d e foi digitado %d vezes",maior,contmaior);}

    for(cont=0;cont<10;cont++)
        if(maior==A[cont])
            {printf("\nO numero apareceu na posicao %d",cont);}
}
