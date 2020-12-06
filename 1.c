/*
#Problem Set-1
1.Scan N (take input N from user)values from user into an array.
1915002508, Md Sazzad Hossen
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100];
    int N,i;
    scanf("%d",&N);
    if(N>0 && N<100)
    {
      for(i=0; i<N; i++)
      {
          scanf("%d",&a[i]);
      }
   return 0;
    }

