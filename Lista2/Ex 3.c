#include <stdio.h>

main()

{

int k,idade,cont,soma=0;

    do
        {printf("Insira a quantidade de idades\n");
        scanf("%i",&k);
        if(k<=0)
        {printf("Insira um valor maior que zero\n");}
        }while(k<=0);
/*
        do
            {printf("Insira uma idade");
            scanf("%i",&idade);
            soma+=idade;
            cont++;
            }while(cont<k);
*/

            for(cont=0;cont<k;cont++)
                {
                printf("Insira uma idade ");
                scanf("%i",&idade);
                soma+=idade;
                }

            printf("A soma das idades e %i",soma);

}
