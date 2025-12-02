/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as 
inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. 
Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as 
output. If no solution exists, print "-1 -1".
*/
#include<stdio.h>
int main()
{
    int i, j, n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
   { printf("Error.\nExiting..."); 
     return 0; }
    int num[n], found;
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &num[i]); }
    printf("Enter the target: ");
    scanf("%d", &target);
    printf("The indices are ");
    for(i=0; i<n; i++)
    { found = 0;
      for(j=0; j<n; j++)
    { if((num[i] + num[j]) == target && i != j)
      { printf("%d %d", i, j);
      return 0; }
      else
      { found = 1; }
    }  }
    if(found == 1)
    { printf("-1 -1"); }
    return 0;
}