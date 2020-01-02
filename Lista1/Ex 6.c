#include <stdio.h>

main()

{
int anonasc, anoat;

printf("Insira o ano atual\n");

do
    {scanf("%i",&anoat);
    if(anoat<1800)
    {printf("Insira um ano maior que 1800\n");}
    }while(anoat<1800);

printf("Insira o ano do seu nascimento\n");

    do
    {scanf("%i",&anonasc);
        if(anonasc>anoat)
        {printf("Ano de nascimento nao pode ser maior que o ano atual\n");}
        }while(anonasc>anoat);

printf("A sua idade e %i\n",anoat-anonasc);
printf("Voce tera %i anos em 2020\n",2020-anonasc);
}
