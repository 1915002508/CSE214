/*
3.Scan values from user into an array until user input is 0(Zero).
1915002508, Md Sazzad Hossen
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100],max_size = 10,i;

    for(i=0; i<100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            {
                break;
            }
        else if(i>=max_size)
            {
                printf("Array Overflow");
                              break;
            }
    }

    return 0;
}
