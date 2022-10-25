/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
/*Receba três valores que representam a equação completa do segundo grau.
Exiba as raízes reais , caso não tenha raízes reais informe ao usuário.
Utilize apenas variáveis locais!!*/
float numeros()
{ float aux;
    do
    {
        printf("Digite um numero diferente de zero\n");
        scanf("%f",&aux);
        if (aux==0)
            printf("Valor invalido");
    }while(aux==0);
    return(aux);
  }
raizes(float a,float b, float d)
{   if (d==0)
        {printf("Há duas raizes reais e iguais %.2f \n",-b/(2*a));
        }
    else
            {
        printf("1a.raiz:\n %.2f \n",(-b+sqrt(d))/2*a);
        printf("2a.raiz:\n %.2f \n",(-b-sqrt(d))/2*a);}
}
float delta(float a, float b, float c)
{    float d;
    d=pow(b,2) - 4*a*c;
    return(d);}

main()
{  float a,b,c,d;
    a=numeros();
    b=numeros();
    c=numeros();
     d=delta(a,b,c);
    if (d<0)
      printf("Não existe  raiz real \n");
        else
            raizes(a,b,d);
    }

