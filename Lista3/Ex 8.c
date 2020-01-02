#include <stdio.h>
main()
{
int k,n,i=1,soma=0,cont=0,contp=0,conti=0;

do
    {printf("Insira a quantidade de termos: ");
    scanf("%i",&k);
    if(k<=0)
        {printf("Insira um valor maior que zero\n");}
    }while(k<=0);

    while(cont<k)
        {printf("Insira o %i numero: ",i++);
        scanf("%i",&n);
        cont++;
        if(n>0)
            {contp++;}
        if(n%2!=0)
            {soma+=n;
            conti++;
            }
        }

        printf("\nA quantidade de numeros positivos recebidos e %i",contp);

        if(conti==0)
            printf("\nNao foram inseridos numeros impares\n");
            else
                printf("\nA media dos numeros impares recebidos e %i",soma/conti);
}
