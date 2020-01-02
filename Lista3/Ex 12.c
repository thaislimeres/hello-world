#include <stdio.h>
main()
{
int N=0,cont=0,contif1=0,contif2=0;
float P,soma=0,maior=0,menor=0;

while(N<=0)
    {printf("Insira a quantidade de pesos: ");
    scanf("%i",&N);
    if(N<=0)
        {printf("Insira um valor maior que zero\n");}
    }

    do
        {printf("Insira o %i peso: ",cont+1);
        scanf("%f",&P);
        if(P>=70 && P<=85.5)
            {contif1++;
            soma+=P;
            }
        if(P>75)
            {contif2++;}
        if(cont==0 || P<=menor)
            {menor=P;}
        if(cont==0 || P>=maior)
            {maior=P;}
        cont++;
        }while(cont<N);
        if(contif1==0)
            {printf("\nA media dos pesos superiores ou iguais a 70 kgs e inferiores ou iguais a 85.5 kgs e 0");}
            else
                {printf("\nA media dos pesos superiores ou iguais a 70 kgs e inferiores ou iguais a 85.5 kgs e %f",soma/contif1);}

        printf("\nA quantidade de pessoas que apresentam pesos superiores a 75 kgs e %i",contif2);
        printf("\nO maior peso e %g",maior);
        printf("\nO menor peso e %g",menor);

}
