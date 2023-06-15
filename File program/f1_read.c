//....carete the file and read the data using fprintf funtion....
// this is the first program in file handlinge
#include<stdio.h>

int main()
{
    //carete the file pointre to pointing the file
    FILE *ptr;
    char buff[50];
    //fopen for open the file in read oe wirte mode
   ptr= fopen("abc.text","r");
  //if file is empti 
   if (ptr==NULL)
   {
       printf("the file could not open");
       return 0;
   }
   //read the data in the file using fscanf funcation
     
    // fscanf(ptr,"%s",buff);
     //printf("%s\n",buff);
    // fscanf(ptr,"%s",buff);
     //printf("%s\n",buff);
     //fscanf(ptr,"%s",buff);
     //printf("%s\n",buff);

     //fscanf(ptr,"%s",buff);
     //printf("%s\n",buff);
    
 

 // secund function for reding the file
 if (fgets(buff,100,ptr)!=NULL)
 {
     printf("%s",buff);
 }
 
//close the file using fclodse funtion
fclose(ptr);

}
