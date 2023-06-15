#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
  int chose;  
    do{
    printf("\n 1:the length of the string");
    printf("\n 2:copy string");
    printf("\n 3:convert to uppercase");
    printf("\n 4:string conectoin");
    printf("\n 5:exit");
    switch (chose)
    {
        case 1:
        printf("enter the string\n");
        gets(s1);
        printf("\n the length is=%d",strlen(s1));
        break;
            case 2:
        printf("enter the string\n");
        gets(s1);
        printf("\n the length is=%s",strcpy(s2,s1));
        break;
            case 3:
        printf("enter the string\n");
        gets(s1);
        printf("\n the uppercase is=%d",strupr(s1));
        break;
            case 4:
        printf("enter the first string\n");
        gets(s1);
         printf("enter the secound string\n");
        gets(s2);
    strcat(s1,s2);
        printf("\n the concatination is=%d",strlen(s1));
        break;
    }
    
 } while (chose!=5);
  
}