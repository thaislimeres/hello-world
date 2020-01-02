#include <stdio.h>
main()
{
int A[12],cont;

for(cont=0;cont<12;cont++)
    {printf("Insira o %d numero: ",cont+1);
    scanf("%d",&A[cont]);
    }

    for(cont=0;cont<12;cont++)
        {if(A[cont]>121)
            {printf("%d ",A[cont]);}
        }
}
