#include <stdio.h>
#define ex8

#ifdef ex1a

main()

{

int k,num=0,cont=0;

do
    {
    printf("Insira a quantidade de termos\n");
    scanf("%i",&k);
    if(k<=0)
    {printf("Digite um valor maior que zero\n");}
    }while(k<=0);

    do
        {num=num+3;
        cont=cont+1;
        printf("%i ",num);
        }while(cont!=k);

}

#endif ex1a

#ifdef ex1b

 #include <stdio.h>

main()

{

int k,num=0,cont=0;

do
    {
    printf("Insira a quantidade de termos\n");
    scanf("%i",&k);
    if(k<=0)
    {printf("Digite um valor maior que zero\n");}
    }while(k<=0);

    do
        {num=num+3;
        cont=cont+1;
        printf("%i ",num);
        }while(cont!=k);

}


#endif ex1b // ex1b

#ifdef ex2a

#include <stdio.h>

main()

{

int k,num1=0,num2=0,cont=0;

do
    {printf("Insira a quantidade de termoa\n");
    scanf("%i",&k);
    if(k<=0)
    {printf("Digite um valor maior que zero\n");}
    }while(k<=0);

    do
        {num1=num1+2;
        num2=num2+5;
        printf("%i/%i ",num1,num2);
        cont=cont+1;
        }while(cont<k);

}


#endif ex2a // ex

#ifdef ex3

#include <stdio.h>

main()

{

int k,idade,cont,soma=0;

    do
        {printf("Insira a quantidade de idades\n");
        scanf("%i",&k);
        if(k<=0)
        {printf("Insira um valor maior que zero\n");}
        }while(k<=0);
/*
        do
            {printf("Insira uma idade");
            scanf("%i",&idade);
            soma+=idade;
            cont++;
            }while(cont<k);
*/

            for(cont=0;cont<k;cont++)
                {
                printf("Insira uma idade ");
                scanf("%i",&idade);
                soma+=idade;
                }

            printf("A soma das idades e %i",soma);

}

#endif ex3 // 3


#ifdef ex4

#include <stdio.h>

main()

{

int k,cont=0,contp=0,num=0,soma=0;

do{
    printf("Defina a quantidade de termos\n");
    scanf("%i",&k);
    if(k<=0)
    {printf("Digite um valor maior que zero\n");}
    }while(k<=0);

    for(cont=0;cont<k;cont++)
        {num=num+2;

        if(num%2==0 && num%5==0)
            {contp++;
            soma+=num;
            }
        }

        printf("A media dos primeiros numeros pares e multiplos de cinco e %i",soma/contp);

}

#endif ex4

#ifdef ex5

#include <stdio.h>

main()

{
    int k,num=0,cont=0,contneg=0,cont0=0;

    do
        {printf("Digite a quantidade de numeros que deseja receber\n");
        scanf("%i",&k);
        if(k<=0)
            {printf("Digite um valor menor que zero\n");}
        }while(k<=0);

        for(cont=0;cont<k;cont++)
            {
            printf("Digite um numero: ");
            scanf("%i",&num);

            if(num<0 && num%2==0)
                {contneg++;
                }
                    if(num==0)
                        {cont0++;
                        }
            }

        printf("\nA quantidade de numeros pares negativos digitos e %i",contneg);

        printf("\nO numero zero foi digitado %i vezes\n",cont0);

}

#endif 5 // 5

#ifdef ex6

#include <stdio.h>

main()

{

int k,num=0,cont=0,cont7=0;

do
    {printf("Digite a quantidade de termos\n");
    scanf("%i",&k);

        if(k<=0)
        printf("Digite um valor maior que zero\n");
    }while(k<=0);

for(cont=0;cont<k;cont++)

    {printf("Digite um numero: ");
    scanf("%i",&num);

        if(num%7==0)
        {cont7++;
        }
    }

    printf("Foram digitados %i multiplos de 7\n",cont7);

}


#endif ex6 // ex6

#ifdef ex7

#include <stdio.h>

main()

{

int x=0,cont=0,h=0,produto=1;

do
    {printf("Digite a quantidade de termos\n");
    scanf("%i",&x);
    if(x<=0)
    {printf("Digite um valor maior que zero\n");}
    }while(x<=0);

    for(cont=0;cont<x;cont++)
        {printf("Digite um numero: ");
        scanf("%i",&h);
        produto=produto*h;
        }
            printf("O produto dos %i numeros e %i",x,produto);
}

#endif ex7 // ex7

#ifdef ex8

#include <stdio.h>

main()

{

int n,peso,cont=0,soma=0;

do
    {printf("Digite a quantidade de pessoas\n");
    scanf("%i",&n);
    if(n<=0)
        {printf("Digite um valor maior que zero\n");}
    }while(n<=0);

    for(cont=0;cont<n;cont++)
    {printf("Insira o peso: ");
    scanf("%i",&peso);
    soma+=peso;
    }

    printf("A media dos pesos e %i",soma/n);
}

#endif ex8 // ex8
