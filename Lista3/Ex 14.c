#include <stdio.h>
main()
{
int k, num, cont=0, contdiv3=0, contneg=0, contmaior=0, maior=0, maior2=0, soma=0;

    do
    {printf("Insira a quantidade de termos: ");
    scanf("%d",&k);
    if(k<=0)
        {printf("Insira um valor maior que zero\n");}
    }while(k<=0);

        for(cont=0;cont<k;cont++)
        {printf("Insira o %d numero: ",cont+1);
        scanf("%d",&num);
        if(num>0 && num%3==0)
            {contdiv3++;}
        if(num<0)
            {contneg++;
            soma+=num;
            }
        if(cont==0 || num>maior)
            {maior=num;
            contmaior=1;}
            else if(maior==num)
                {contmaior++;}
            }

        printf("\nA quantidade de numeros positivos divisiveis por 3 e %d",contdiv3);

        if(contneg>0)
            {printf("\nA media dos numeros negativos digitados e %d",soma/contneg);}
            else
                {printf("\nNao foi inserido nenhum numero negativo");}
        printf("\nO maior numero encontrado e %d e foi digitado %d vezes",maior,contmaior);
}
