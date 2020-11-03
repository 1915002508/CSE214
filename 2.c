/*
2.Scan values from user into an array until end of life.
1915002508 . Md Sazzad Hossen
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100];
    int i=0;

    while(scanf("%d",&a[i]) != EOF)
    {

        if (i<100)
        {
            printf("Array Overflow");
            break;
        }

    }

    return 0;
}
