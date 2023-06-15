#include<stdio.h>
#include<process.h>
#define Max 100
int main()
{
    int size =0,element,n,a[Max],index,i;
    setbuf(stdout,NULL);
   printf("enter the value of n \n ");
    scanf("%d&size");
printf("enter the  n  element\n ");
for ( i = 0; i < size; i++)
{
    scanf("%d",&a[i]);}
printf("\n....elementes in array befor insertion....\n");
for ( i = 0; i < size; i++)
{
    printf("%d",a[i]);
}
printf("enter the element to be inseted :\n ");
scanf("%d",&element);
printf("enter the index wher element to be inserted : \n ");
scanf("%d",&index);
if (index<0 || index>size-1)
{
    printf(" invalid index \n ");
}
else
{
    for ( i = size-1; i >= index; i--)
    {
        a[i+1]=a[i]; }
    size ++;
    a[index]=element;
}
printf("****8 elements in the arrya after insertion ******\n ");
for ( i = 0; i < size; i++)
{
printf("%d",a[i]);
}
return 0;
}