/*
6.Print the array element in reverse order.Each element should be separated by space.
1915002508,Md Sazzad Hossen
Data Structure Lab.
*/

#include<stdio.h>
int main()
{

    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,s=10;

    for(i=s-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}
