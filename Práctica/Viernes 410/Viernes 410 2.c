#include<stdio.h>
main() {
int *arr;
int size=5;
arr= (int *)malloc(size*sizeof(int));
if (arr==NULL)
{printf("Error al asignar Memoria");
return 1;
}
inicializarArreglo(arr,size);
for (int i=0;i<size;i++)
{printf("Elemento de arreglo %d\n",arr[i]);
}
free(arr);
}
void inicializarArreglo(int *arr, int size)
{for(int i=0;i<size;i++)
{arr[i]=i+1;
}
}