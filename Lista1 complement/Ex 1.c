#include <stdio.h>

main()

{

int a,b;

do
    {
    printf("Insira dois numeros distintos\n");
    scanf("%i%i",&a,&b);
    }while(a==b);

    {if(a>b)
    printf("O maior numero e %i",a);

        else
        printf("O maior numero e %i",b);
    }
}
