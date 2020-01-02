#include <stdio.h>
main()
{
int k=0,salario,cont=0,soma=0,maior,menor;

while(k<=0)
    {printf("Insira a quantidade de salarios: ");
    scanf("%i",&k);
    if(k<=0)
        {printf("Insira um valor maior que zero\n");}
    }

    while(cont<k)
        {printf("Insira o %i salario: ",cont+1);
        scanf("%i",&salario);
        cont++;
        if(salario>2994 && salario<6986)
            {soma+=salario;}

            if(cont==0 || salario>maior)
                {maior=salario;}
                if(cont==0 || salario<menor)
                    {menor=salario;}
        }

    printf("\nA somatoria dos salarios superiores a 3 salarios minimos e inferiores a 7 salarios minimos e %i",soma);
    printf("\nO maior salario e %i",maior);
    printf("\nO menor salario e %i",menor);
}
