#include<stdio.h>
main()
    {int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=arr; //ptr asume la direccion de memoria del primer elemento
    for(int i=0;i<5;i++)
        {printf("Valor %d direccion %p\n",*(ptr+i),(ptr+i));
        }
    printf("Nuevos valores\n");
        for(int i=0;i<5;i++)
        {*(ptr+i)=*(ptr+i)*2;
        printf("valor %d direccion %p\n",*(ptr+i),(ptr+i));
        }
    }
