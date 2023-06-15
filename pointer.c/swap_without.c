#include<stdio.h>
int main()
    {
        int a,b;
    printf("enter the first number :\n");
    scanf("%d",&a);

       printf("enter the secund number :\n");
       scanf("%d",&b);
               printf(" befor the number is %d and %d\n",a,b);

        a=a*b; //10*21=210
        b=a/b; //210/21=10
        a=a/b; //210/10=21
        printf(" after the number is %d and %d\n",a,b);

    }
