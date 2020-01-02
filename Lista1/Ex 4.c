#include <stdio.h>

main()

// va = valor aula
// na = numero aulas
// sb = salario bruto
// sl = salario liquido

{
float va,na,sb,sl;

printf("Digite o valor da hora aula\n");

    do
        {scanf("%f",&va);
        if(va<=0)
        {printf("Digite um valor valido\n");}
        }while(va<=0);

printf("Digite o numero de aulas ministradas\n");

        do
            {scanf("%f",&na);
            if(na<0)
            {printf("Digite um valor valido\n");}
            }while(na<0);

sb=va*na;

        if(sb<=1693.72)
        {printf("O salario liquido e %f",sb/1.08);}

        else
            if(sb<=2822.90)
            {printf("O salario liquido e %f",sb/1.09);}
                else
                {printf("O salario liquido e %f",sb/1.11);}
}
