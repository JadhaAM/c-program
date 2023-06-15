#include<stdio.h>
int main()
{
    FILE*fp;
    char buff[50];
    fp=fopen("abc2.txt","r");
    if (fp==NULL)
    {
        return 0;

    }
    
    fread(buff,60,4,fp);
    printf("%s",buff);

    fclose(fp);

return 0;
}