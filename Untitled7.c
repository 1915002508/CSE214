/*
5.Print entire array each element separated by comma.
1915002508,Md Sazzad Hossen
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,s=10;

    for(i=0; i<s-1; i++)
    {
        printf("%d,",a[i]);
    }
    printf("%d",a[s-1]);

    printf("\n");

    return 0;
}
