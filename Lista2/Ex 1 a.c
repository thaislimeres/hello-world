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
