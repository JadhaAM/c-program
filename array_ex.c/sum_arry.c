#include<stdio.h>

int main()
{
    int b[2][3];
    printf("enter the number\n");
    for (int i = 0; i < 2; i++)
{
      for (int j = 0; i < 3; j++)
    {
        scanf("%d",&b[i][j]);
    }
 }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 3; j++)
        {
        printf("%d the values %d\n",i+1,b[i][j]);
        }
    }
    
}