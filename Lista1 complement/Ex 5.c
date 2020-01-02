#include <stdio.h>

main()

{

float numhora,valhora,salmin,salbru;

printf("Insira a quantidade de horas trabalhadas no mes\n");

    do
        {
        scanf("%f",&numhora);
        if(numhora<=0)
        {printf("Insira um valor valido\n");}
        }while(numhora<=0);

                printf("Digite o valor do salario minimo / hora\n");
        do
            {
            scanf("%f",&salmin);
            if(salmin<=0)
            {printf("Informe um salario valido\n");}
            }while(salmin<=0);

    valhora=salmin/2;

    salbru=numhora*valhora;

    printf("O salario a receber e %f",salbru*0.97);

}
