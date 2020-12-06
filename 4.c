/*
5.Update fifth (5th) index with another value.
1915002508, Md Sazzad Hossen
Data Structure Lab.
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,max_size=100,s = 10;

    printf("Before Operation:\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

    a[5]=15;

    printf("After Operation :\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
