#include <stdio.h>
main(){char cadena [20];
printf("Ingrese una cadena: ");
//gets(cadena);
fgets(cadena,20,stdin);
printf("\n La cadena es: ");
puts(cadena);
}