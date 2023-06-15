#include<stdio.h>
int main()
{
    int a[3] [4] ,i,j;
    printf("the arry starte form\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&a[i][j]);
        }
       printf("\n"); 
    }
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("\nthe arry value %d",a[i][j]);
        }
        printf("\n");
    }
    
}