#include<stdio.h>
main() {
int *arr;
int size=5;
arr= (int *)malloc(size*sizeof(int));
if (arr==NULL)
{printf("Error al asignar Memoria");
return 1;
}
for (int i=0;i<5;i++)
{arr[i]=i+1;
printf("Elemento del arreglo %d\n",arr[i]);
}
size=10;
arr=(int*)realloc(arr,size*sizeof(int));
if(arr==NULL)
{printf("Error en Reasignar Memoria");
return 1;}
for(int i=5;i<size;i++)
{arr[i]=i+1;
printf("Completo el arreglo con %d\n",arr[i]);
free(arr);
}
}
