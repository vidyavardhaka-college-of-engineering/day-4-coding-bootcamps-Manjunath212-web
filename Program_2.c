//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   int arr1[100],arr2[100];
   int i,n;

   printf("\n\ncopy the elements one array into another  another array :\n");
   ("----------------------------------------------\n");
{
   printf("input the no of elements to be stored in the array: ");
   scanf("%d",&n);
}
   printf("input %d elements in the array :\n,n");
   for(i=0;i<n;i++)
   {
     printf("elements - %d : ",i);
     scanf("%d",&arr1[1]);
   }
   
   for(i=0;i<n;i++)
   {
     arr2[i] = arr1[i];
   }

printf("\n the elements stored in the first array are :\n ") ;
for(i=0; i<n; i++)
{
  printf("% 5d", arr1[i]);
}

 printf("\n\n the elements copied into the second array are :\n");
 for(i=0; i<n; i++)

    {
      printf("% 5d", arr2[i]);
    }
      printf("\n\n");

   return 0; 
}
