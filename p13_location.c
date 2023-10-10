#include <stdio.h>
int main()
 
{
 
   int arr[250], search, n, i;
 
   printf("enter array size: ");
   scanf("%d",&n);
 
   printf("\nenter %d elements: ", n);

   for (i = 0; i < n; i++)
	   scanf("%d", &arr[i]);

   printf("\nPlease enter the number you want to search : ");
   scanf("%d", &search);
 
   for (i = 0; i < n; i++)
   {
      if (arr[i] == search)  
      {
         printf("\n%d is present at location %d\n", search, i+1);
         break;
      }
   }
   if (i == n)
      printf("%d is not available in the array.\n", search);
   return 0;
 
}
