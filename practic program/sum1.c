#include<stdio.h>
 void   sumandmulti(int a,int b,int * sum,int *multi)
 {
    *sum=a+b;
    *multi=a*b;
 }

int main()
{
    int a=5,b=10, sum, multi;
    sumandmulti(a,b,&sum,&multi);
        printf("the sum=%d\n",sum);
        printf("the multi=%d\n",multi);

    return 0;
}