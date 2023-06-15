//....carete the file and wirte the data using fprintf funtion....
// this is the first program in file handlinge
#include<stdio.h>
int main()
{
    //carete the file pointre to pointing the file
    FILE *ptr;
    //fopen for open the file in read oe wirte mode
   ptr= fopen("abc.text","w");
  //if file is empti 
   if (ptr==NULL)
   {
       printf("the file could not open");
       return 0;
   }
   //write the data in the file using fprintf funcation
     fprintf(ptr,"%s"," wellcome to file handling ...code with amol\n");
   fprintf(ptr,"%s"," ***..thanks ofor coming...***\n");
//print in the output
   printf("\n\t file is carete sucessfully...\n\n");
 
//close the file using fclodse funtion
fclose(ptr);

}
