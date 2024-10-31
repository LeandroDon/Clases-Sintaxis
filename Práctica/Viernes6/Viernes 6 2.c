#include <stdio.h>
main(){
    int a,b;
    printf("Ingrese el primer valor\n");
    scanf("%d",&a);
    printf("Ingrese el segundo valor\n");
    scanf("%d",&b);
    suma(a,b);
    resta(a,b);
    multiplica(a,b);
    sleep(50);
}

suma(int x, int y) {
printf("La suma de %d y %d es %d\n", x,y,x+y);
}
resta(int x, int y) {
printf("La resta de %d y %d es %d\n", x,y,x-y);
}
multiplica(int x, int y) {
printf("La multiplicacion de %d y %d es %d\n", x,y,x*y);
}