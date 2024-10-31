#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona
{
    char nombre[50];
    int edad;
    float altura;
}
main(){
    struct Persona persona1;
    strcpy(persona1.nombre,"juan");
    persona1.edad=30;
    persona1.altura=1.75;
    printf("Nombre: %s\n",persona1.nombre);
    printf("Edad: %d\n",persona1.edad);
    printf("Altura: %.2f\n",persona1.altura);

struct Persona *ptrPersona; //se declara el puntero (variable de tipo puntero)
ptrPersona=&persona1; //se asigna la dirección de memoria al puntero de la variable persona1
strcpy(ptrPersona->nombre,"Carlos");
ptrPersona->edad=35;
ptrPersona->altura=1.80;
printf("Nombre modificado: %s\n",persona1.nombre);
printf("Edad modificada: %d\n",persona1.edad);
printf("Altura modificada: %.2f\n",persona1.altura);
}