
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the size of the integer: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting..."); 
      return 0; }
    int arr[n];
    for(i=0; i<n; i++)
    { printf("Enter the elements: ");
      scanf("%d", &arr[i]); }
    int current_sum = arr[0], max_sum = arr[0];
    for(i=1; i<n; i++)
    { if(current_sum+arr[i] > arr[i])
    { current_sum = current_sum + arr[i]; }
      else
    { current_sum = arr[i]; }
      if (current_sum > max_sum)
    { max_sum = current_sum; }
    }
    printf("Maximum subarray sum = %d\n", max_sum);
    return 0;
}
