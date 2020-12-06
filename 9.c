/*
9.Delete a value from Kth index (take input K from user) from
the array shift all other value to left.
1915002508,Md Sazzad Hossen
Data Structure Lab.
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,K,max_size=100,s = 10;

    scanf("%d", &K);

    printf("Before Operation:\n");
        for(i=0;i<s;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

    for (i=K; i<s; i++)
        {
           a[i]=a[i+1];
        }

    s--;

    printf("After Operation:\n");
        for(i=0;i<s;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

    return 0;
}
