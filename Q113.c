/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest
 element in the array. Print the kth smallest element as output.
*/
#include<stdio.h>
int main()
{ 
  int i, j, k, n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  if(n <= 0)
   { printf("Error.\nExiting..."); 
     return 0; }
  for(i=0; i<n; i++)
  { printf("Enter an integer: ");
    scanf("%d", &arr[i]); }
  for(i=0; i<n; i++)
  { for(j=0; j<n-i-1; j++)
  { if(arr[j] > arr[j+1])
  { int temp = arr[j]; 
    arr[j] = arr[j+1];
    arr[j+1] = temp; }
  } }
  printf("Enter the kth smallest number you want to find! ");
  scanf("%d", &k);
  printf("The %dth smallest number is ", k);
  printf("%d!", arr[k-1]);
  return 0;
}