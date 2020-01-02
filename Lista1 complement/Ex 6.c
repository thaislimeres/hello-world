#include <stdio.h>

main()

{

float altd,altp;

printf("Insira a altura do espelho do degrau\n");

do
    {scanf("%f",&altd);
    if(altd<=0)
    {printf("Insira um valor maior que zero\n");}
    }while(altd<=0);

        printf("Insira a altura do desnivel\n");

    do
        {scanf("%f",&altp);
        if(altp<=0)
        {printf("Insira um valor maior que zero\n");}
        }while(altp<=0)

printf("A quantidade de degraus necessarios para alcancar o desnivel e %i",altp/altd);

}
