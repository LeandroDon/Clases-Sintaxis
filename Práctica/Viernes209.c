#include<stdio.h>
main() {
    int var=10;
    int *ptr;
    ptr=&var;
    printf("El valor de var es %d\n", var);
    *ptr=20;
    printf("El nuevo valor de var es %d", var);
    var=15;
    printf("El ultimo valor es %d", var);
}