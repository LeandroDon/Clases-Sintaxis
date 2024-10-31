//estructuras anidadas

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Tipo_direccion
{
    char direccion[50];
    char ciudad[50];
    char provincia[50];
};

struct Persona
{
    char nombre[50];
    struct Tipo_direccion direccion;
};

main()
{
    struct Persona persona1;
    strcpy(persona1.nombre,"Jose");
    strcpy(persona1.direccion.direccion,"Belgrano 123");
    strcpy(persona1.direccion.ciudad,"Vdo Ttto");
    strcpy(persona1.direccion.provincia,"Sta Fe");
    printf("Nombre %s\n",persona1.nombre);
    printf("Direccion %s\n",persona1.direccion.direccion);
    printf("Ciudad %s\n",persona1.direccion.ciudad);
    printf("Provincia %s\n",persona1.direccion.provincia);

struct Persona *ptrPersona;
ptrPersona=&persona1;
strcpy(ptrPersona->nombre,"Luciana");
strcpy(ptrPersona->direccion.direccion,"Guemes 734");
strcpy(ptrPersona->direccion.ciudad,"Murphy");
strcpy(ptrPersona->direccion.provincia,"Santa Fe");
printf("Nombre modificado %s\n",persona1.nombre);
printf("Direccion modificada %s\n",persona1.direccion.direccion);
printf("Ciudad modificada %s\n",persona1.direccion.ciudad);
printf("Provincia modificada %s\n",persona1.direccion.provincia);
}