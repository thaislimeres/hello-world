#include <stdio.h>

main()

{
float a,b,c;

printf("Insira tres numeros quaisquer\n");

do
    {
    scanf("%f%f%f",&a,&b,&c);
    if(a==b && a==c)
    {printf("Todos os numeros sao iguais, insira novos dados\n");}
    }while(a==b && a==c);

        if(a>b && a>c)
        {printf("O maior numero e %f\n",a);}

        else
            if(b>a && b>c)
            {printf("O maior numero e %f\n",b);}

        else
            if(c>a && c>b)
            {printf("O maior numero e %f\n",c);}

            else
                if(a==b && a>c)
                {printf("O maior numero e %f\n",a);}

                else
                    if(a==c && a>b)
                    {printf("O maior numero e %f\n",a);}

                        else
                            if(b==c && b>a)
                            {printf("O maior numero e %f\n",b);}

}
