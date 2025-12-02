// Not correct
#include<stdio.h>
int main()
{
   int i, j, n, count=0;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   if(n <= 0)
   { printf("Error.\nExiting..."); 
     return 0; }
   int arr[n];
   for(i=0; i<n; i++)
   { printf("Enter the elements: ");
     scanf("%d", &arr[i]); }
   for(i=0; i<n; i++)
   {for(j=0; j<n; j++)
   { if( arr[j] == arr[i] )
   { count++;
    if(count == 2)
    { printf("The repeating number is %d", arr[i]); } }
   } }
   return 0;
}