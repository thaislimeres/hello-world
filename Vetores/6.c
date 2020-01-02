#include <stdio.h>
main()
{
int A[10], B[10], cont=0;

for(cont=0;cont<10;cont++)
    {printf("Insira o %do numero: ",cont+1);
    scanf("%d",&A[cont]);
    }

    for(cont=0;cont<10;cont++)
        {B[cont]=A[cont]-A[cont]-A[cont];}

        printf("\nAs posicoes do vetor A sao:\n");
        for(cont=0;cont<10;cont++)
            {printf("%d ",A[cont]);}

            printf("\n\nAs posicoes do vetor B sao:\n");
            for(cont=0;cont<10;cont++)
                {printf("%d ",B[cont]);}
}
