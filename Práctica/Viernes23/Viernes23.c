#include<stdio.h>
main()
{
    int x,y;
    printf("Ingrese un numero:\n");
    scanf("%d",&x);
    printf("Ingrese el segundo numero:\n");
    scanf("%d",&y);
    if (x>y)
    {
        printf("el mayor numero es:%d",x);
    }
    else if(y>x){
        printf("el numero mayor es:%d",y);
        }
    else{
        printf("Son iguales");
    }
    return 0;
}