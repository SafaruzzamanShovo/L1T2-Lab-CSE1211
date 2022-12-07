#include <stdio.h>
int main()
{
   char str[1000];
   FILE *fptr;
   fptr=fopen("test.txt","w");	

   if(fptr==NULL)
   {
      printf(" Error in opening file!");
      return 0;
   }
   printf(" Input a sentence for the file : ");
   gets(str);
   fprintf(fptr,"%s",str);
   fclose(fptr);
   printf("\n The file test.txt created successfully...!!\n");
   return 0;
}
        
