#include <stdio.h>

main()

{
float h,w;

printf("Insira a sua altura em metros\n");

do
    {
    scanf("%f",&h);
    if(h<1 || h>3)
    {printf("Insira um valor entre 1 e 3 metros\n");}
    }while(h<1 || h>3);

        printf("Insira o seu peso em quilos\n");

    do
        {
        scanf("%f",&w);
        if(w<0 || w>250)
        {printf("Insira um valor entre 10 e 250 quilos\n");}
        }while(w<0 || w>250);

if(w<60)
    {if(h<1.20)
    {printf("A sua classificacao e A\n");}

    else
        if(h<=1.70)
        {printf("A sua classificacao e B\n");}

            else
                {printf("A sua classificao e C\n");}
    }

    if(w>=60 && w<90)
        {if(h<1.20)
        {printf("A sua classificacao e D\n");}

        else
            if(h<=1.70)
            {printf("A sua classificacao e E\n");}

            else
                {printf("A sua classificacao e F\n");}
        }

        if(w>=90)
            {if(h<1.20)
            {printf("A sua classificacao e G\n");}

            else
                if(h<=1.70)
                {printf("A sua classificacao e H\n");}

                else
                    {printf("A sua classificacao e I\n");}
            }
}
