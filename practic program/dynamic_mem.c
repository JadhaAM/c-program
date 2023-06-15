#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a[10],n;
    int sum=0;
    int *p ;
    printf("how many elemants :\n");
    scanf("%d",&n);   
    p=(int*)malloc(n*sizeof(int));
        
    printf("enter the elemant:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
for (int i = 0; i < n; i++)
    {
        printf("%2d",a[i]);
         sum+=sum+a[i];

    }
}