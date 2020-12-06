/*
2.Insert a value X[take input X from user] in the array at the end of currently stored elements.
 1915002508, Md Sazzad Hossen
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100]={1,9,1,0,0,2,5,0,8,10};
    int i,X,max_size = 100, s=10;

    scanf("%d",&X);

    printf("Before Operation:\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

    a[s]=X;
    s++;

    printf("After Operation :\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
