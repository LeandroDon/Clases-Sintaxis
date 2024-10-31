#include<stdio.h>
main()
    {int x=5;
    noCambia(x);
    printf("El valor de x es %d\n",x);
    cambia(&x);
    printf("El valor de x es %d\n",x);
    return 0;
    }

void noCambia(int a)
{a=10;
printf("El valor de la funcion NC es %d\n",a);
}
void cambia(int *a)
{*a=15;
}