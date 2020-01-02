#include <stdio.h>
main()
{
int k,cont=0;
float n,maior=0;

do
    {printf("Insira a quantidade de termos: ");
    scanf("%i",&k);
    if(k<=0)
        {printf("Insira um valor maior que zero\n");}
    }while(k<=0);

    for(cont=0;cont<k;cont++)
        {printf("Insira o %i numero: ",cont+1);
        scanf("%f",&n);
        if(cont==0 || n>maior)
            {maior=n;}
        }

        printf("\nO maior numero digitado e %f",maior);
}
