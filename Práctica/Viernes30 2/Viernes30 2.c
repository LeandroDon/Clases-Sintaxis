#include <stdio.h>
main()
{
    int numero[3];
    int mayor=0;
    int i=0;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero[i]);
        i=i+1;
    } while (i<3);

    for (int j=0; j<3; j++)
    {
        if (mayor<numero[j]);
        {mayor=numero[j];}
    }
    printf("El mayor es %d",mayor);
}
