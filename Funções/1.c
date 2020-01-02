#include <stdio.h>

float Esfera(float J)
{float v;

v=1.33*3.14*pow(J,3);

return (v);

}

main()
{
float r;

do
    {printf("Insira o valor do raio da esfera: ");
    scanf("%f",&r);
    if(r<=0)
        {printf("Insira um raio maior do que zero\n");}
    }while(r<=0);

    printf("O volume da esfera e %f",Esfera(r));

}
