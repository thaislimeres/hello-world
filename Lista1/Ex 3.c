#include <stdio.h>

main()

{
float a;

    do
        {
        printf("Digite o valor do produto\n");
        scanf("%f",&a);
        if(a<=0)
        {printf("O valor e invalido\n");}
        }while (a<=0);

printf("o valor com desconto e %f", a*0.91);

}
