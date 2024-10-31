#include <stdio.h>
main()
{
    int x=2;
    switch (x)
    {
    case 1:
        printf("x es 1");
        break;
    case 2:
        printf("x es 2");
        break;
    default:
        printf("x es distinto a 1 y 2");
        break;
    }
    return 0;
}
