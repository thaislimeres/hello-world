#include <stdio.h>

main()

{

float a,b,c;

printf("Insira os 3 lados do triangulo\n");

do
    {
    scanf("%f%f%f",&a,&b,&c);
    if(a>b+c || b>a+c || c>b+a)
    {printf("Estes lados nao formam um triangulo, insira novos dados\n");}
    }while(a>b+c || b>a+c || c>b+a);

        if(a==b && a==c)
        printf("O triangulo e equilatero\n");

            else
                if(a!=b && a!=c && b!=a)
                printf("O triangulo e escaleno\n");

                    else
                        printf("O triangulo e isosceles\n");

}
