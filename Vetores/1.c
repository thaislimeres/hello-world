#include <stdio.h>
main()
{
int a[15], cont=0;

for(cont=0;cont<15;cont++)
    {printf("Insira o %d numero: ",cont+1);
    scanf("%d",&a[cont]);
    }

    for(cont=0;cont<15;cont++)
        {printf("%d ",a[cont]);}
}
