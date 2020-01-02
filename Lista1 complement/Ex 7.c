#include <stdio.h>

main()

{

float h;
int s;

    printf("Insira a sua altura em metros\n");
do
    {
    scanf("%f",&h);
    if(h<0.30 || h>3)
    {printf("Insira um valor entre 0.30 e 3 metros\n");}
    }while(h<0.30 || h>3);

    printf("Insira o seu sexo\n");
    printf("1 - mulher\n");
    printf("2 - homem\n");

do
    {
    scanf("%i",&s);
    if(s!=1 && s!=2)
    {printf("Insira 1 para mulher ou 2 para homem\n");}
    }while(s!=1 && s!=2);

    if(s==1)
    printf("O seu peso ideal e %f",(62.1*h)-44.7);

        else
        printf("O seu peso ideal e %f",(72*h)-58);
}
