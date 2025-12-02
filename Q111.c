/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative 
integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that 
window. Print the results separated by spaces as output.
*/
#include<stdio.h>
int main()
{ 
    int i, j, k, n, zero;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
   { printf("Error.\nExiting..."); 
     return 0; }
    int arr[n];
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &arr[i]); }
    printf("Enter the size of the sub-arrays: ");
    scanf("%d", &k);
    printf("The first negative element of each sub-array is ");
    for(i=0; i<=n-k; i++)
    { for(j=i; j<k+i; j++) 
    { if(arr[j] < 0)
    { printf("%d ", arr[j]);
      zero = 0;
      break; 
    }
    else
    { zero = 1; }
    } 
    if(zero == 1)
    {printf("0 "); }
    }
    return 0;
}