/*
6.Update Kth (take input K from user) index with the value
X(take input X from user).
1915002508,Md Sazzad Hossen
Data Structure Lab.
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,K,X,max_size=100,s = 10;

    scanf("%d",&K);
    scanf("%d",&X);

    printf("Before Operation:\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");


    a[K]=X;

    printf("After Operation:\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
