
#include<stdio.h>
int main()
{
    int i, j, n, sum1, sum2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
   { printf("Error.\nExiting..."); 
     return 0; }
    int arr[n], num[n];
    sum1 = 0;
    for(i=0; i<n; i++)
    { printf("Enter the elements: ");
      scanf("%d", &arr[i]); 
      sum1 += arr[i]; }
    sum2 = 0;
    for(i=0; i<n; i++)
    { num[i] = i+1 ;
      sum2 += num[i]; }
    if(sum1 != sum2)
    { j = sum2 - sum1; 
    printf("The missing number is %d", j); }
    else
    { printf("There is no missing number."); }
    return 0;
}