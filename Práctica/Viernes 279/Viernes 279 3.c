#include<stdio.h>
main()
    {int arr[2][4]={{1,2,3,4},{5,6,7,8}};
    int *ptr;
    ptr=&arr[0][0];
    for(int i=0;i<2;i++)
    {for (int j=0;j<4;j++)
        {printf("%d %p\n",*(ptr+i*4+j),(ptr+i*4+j));
        }
    }
}