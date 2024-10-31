#include<stdio.h>
main() {
    int a=10;
    funcion1(a);
    funcion2(a);
    printf("El valor de a es %d",a);
}
funcion1(int var) {var=var*2;
}
funcion2(int var) {var=+10;
}