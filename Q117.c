/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged 
array is also sorted. Print the merged array.
*/
#include<stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter the size of the 1st array: ");
    scanf("%d", &n);
    if(n <= 0)
   { printf("Error.\nExiting..."); 
     return 0; }
    int nums1[n];
    for(i=0; i<n; i++)
    { printf("Enter the elements of the 1st array: ");
      scanf("%d", &nums1[i]); }

    printf("Enter the size of the 2nd array: ");
    scanf("%d", &m);
    int nums2[m]; 
    for(j=0; j<m; j++)
    { printf("Enter the elements of the 2st array: ");
      scanf("%d", &nums2[j]); }
    
    int merged_array[n+m];
    for(i=0; i<n; i++)
    { merged_array[i] = nums1[i]; }
    for(j=0; j<m; j++)
    { merged_array[n+j] = nums2[j]; }
    for(i=0; i<n+m; i++)
    { for(j=0; j<=n+m-1-i; j++)
    { if(merged_array[j] > merged_array[j+1])
    { int temp = merged_array[j];
      merged_array[j] = merged_array[j+1];
      merged_array[j+1] = temp; }
    } }

    printf("The sorted merged array is ");
    for(i=0; i<n+m; i++)
    { printf("%d ", merged_array[i]); }
    return 0;
}