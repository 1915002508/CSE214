/*
4.Insert a value X (take input X from user) in the array at Kth (take input K from user)
index and shift all other value to right.
1915002508, Md Sazzad Hossen
Data Structure Lab.
*/


#include <stdio.h>
int main()
{
    int a[100] = {1, 5, 0, 1, 2, 6, 7, 8, 9, 10};
    int i,X,K,max_size=100,s = 10;

    scanf("%d", &X);
    scanf("%d", &K);

    printf("Before Operation:\n");
    for(i=0;i<s;i++)
        {
           printf("%d ",a[i]);
        }
    printf("\n");

    for (i=s; i>=K; i--){
         a[i]=a[i-1];
    }


    a[K]=X;
    s++;

    printf("After Operation :\n");
    for(i=0; i<s; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
