/*
7.Search a value X (take input X from user) in the array and print
Found if X found in the array otherwise print Not Found.
1915002508,Md Sazzad Hossen
Data Structure Lab.
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,X,c=0,max_size=100,s=10;

    scanf("%d", &X);

    for (i=0; i<s; i++)
    {
        if(a[i]==X)
        {
            c++;
        }

    }
    if(c==1)
    {
       printf("Found\n");
    }
    else
    {
       printf("Not Found\n");
    }

    return 0;
}
