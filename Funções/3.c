#include <stdio.h>

float Divisao(int a, int b)
{float c;

c=(float)a/b;

return (c);

}

main()
{
int a,b;

printf("Insira dois numeros inteiros: ");
scanf("%d %d",&a,&b);

printf("A divisao dos dois numeros e %g",Divisao(a,b));
}
