#include <stdio.h>
main()
{
    char cadena[10];
    printf("Ingrese una cadena \n");
    scanf("%s",cadena);
    for (int i=0; cadena[i]!='\0';i++)
    {
        printf("%c",cadena[i]);
    }
    
}