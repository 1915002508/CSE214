/*
Problem Set -02
1.Insert any value at tenth[10th] index of array.
1915002508, Md Sazzad Hossen
Data Structure Lab.
*/
#include<stdio.h>
int main()
{
    int a[100] = {7,9,3,6,5,6,7,8,9,10};
    int i,max_size = 100, s=10;

    printf("Before Operation:\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    a[10] = 50;
    s++;

    printf("After Operation:\n");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
