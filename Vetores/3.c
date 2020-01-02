#include <stdio.h>
main()
{
int A[8],B[8],cont;

    for(cont=0;cont<8;cont++)
        {printf("Insira o %d numero: ",cont+1);
        scanf("%d",&A[cont]);
        }

    for(cont=0;cont<8;cont++)
        {B[cont]=3*A[cont];}

    printf("Os elementos do vetor A sao\n");
        for(cont=0;cont<8;cont++)
            {printf("%d ",A[cont]);}

    printf("\nOs elementos do vetor B sao\n");
        for(cont=0;cont<8;cont++)
            {printf("%d ",B[cont]);}
}
