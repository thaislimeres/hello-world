#include <stdio.h>

main()

{
float h,w,imc;

printf("Insira o seu peso em quilos\n");

    do
        {scanf("%f",&w);
        if(w<0 || w>250)
        {printf("Insira um valor entre 0 e 250 quilos\n");}
        }while(w<0 || w>250);

    printf("Insira a sua altura em metros\n");

        do
            {scanf("%f",&h);
            if(h<1 || h>3)
            {printf("Insira um valor entre 1 e 3 metros\n");}
            }while(w<0 || w>250);

                imc=w/(h*h);

    if(imc<18.5)
    {printf("O seu imc e %f\n",imc);
    printf("Voce esta abaixo do peso\n");
    printf("\n");
    printf("Valores de referencia\n");
    printf("\n");
    printf("Ate 18.5        | abaixo do peso\n");
    printf("Entre 18.5 e 25 | peso normal\n");
    printf("Entre 25 e 30   | acima do peso\n");
    printf("Acima de 30     | obesidade\n");
    }

    else
        if(imc<25)
    {printf("O seu imc e %f\n",imc);
    printf("Voce esta no peso normal\n");
    printf("\n");
    printf("Valores de referencia\n");
    printf("\n");
    printf("Ate 18.5        | abaixo do peso\n");
    printf("Entre 18.5 e 25 | peso normal\n");
    printf("Entre 25 e 30   | acima do peso\n");
    printf("Acima de 30     | obesidade\n");
    }

    else
        if(imc<30)
    {printf("O seu imc e %f\n",imc);
    printf("Voce esta acima do peso\n");
    printf("\n");
    printf("Valores de referencia\n");
    printf("\n");
    printf("Ate 18.5        | abaixo do peso\n");
    printf("Entre 18.5 e 25 | peso normal\n");
    printf("Entre 25 e 30   | acima do peso\n");
    printf("Acima de 30     | obesidade\n");
    }

    else
    {printf("O seu imc e %f\n",imc);
    printf("Voce esta com obesidade\n");
    printf("\n");
    printf("Valores de referencia\n");
    printf("\n");
    printf("Ate 18.5        | abaixo do peso\n");
    printf("Entre 18.5 e 25 | peso normal\n");
    printf("Entre 25 e 30   | acima do peso\n");
    printf("Acima de 30     | obesidade\n");
    }
}
