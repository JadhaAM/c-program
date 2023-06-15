#include<stdio.h>
# define max(a,b) (a>b)? (a):(b);
# define min(a,b) (a<b)? (a):(b);
int main ()
{
    int a,b,max,min; 
    printf("enter the first number \n");
    scanf("%d",&a);
    printf("enter the secund number \n");
    scanf("%d",&b);
    max=max(a,b);
    printf("the max number is %d\n",max);
    min=min(a,b);
        printf("\nthe min number is %d",min);
    return 0;

}