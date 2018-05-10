#include <stdio.h>

int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("deneme.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      return 0;
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
asd
