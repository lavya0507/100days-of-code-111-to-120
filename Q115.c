
#include<stdio.h>
int main()
{
    int i, j, length1 = 0, length2 = 0, k;
    char s[100], t[100], temp;
    printf("Enter the first word: ");
    gets(s); 
    printf("Enter the second word: ");
    gets(t); 
    for(i=0; s[i] != '\0'; i++)
    { length1++; }
    for(j=0; t[j] != '\0'; j++)
    { length2++; }
    if(length1 != length2)
    { printf("Not Anagrams\n"); }
    else
    { for(i=0; i<length1-1; i++) 
    { for(j=0; j<length1-i-1; j++) 
    { if(s[j] > s[j+1]) 
    { temp = s[j];
      s[j] = s[j+1];
      s[j+1] = temp; }
    }
    }
    for(i=0; i<length2-1; i++) 
    { for(j=0; j<length2-i-1; j++) 
    { if(t[j] > t[j+1]) 
    { temp = t[j];
      t[j] = t[j+1];
      t[j+1] = temp; }
    }
    }
    int anagram = 1; 
    for(k=0; k<length1; k++)
    { if(s[k] != t[k])
    { anagram = 0; 
      break; }
    }
    if(anagram)
    { printf("Anagrams\n"); }
    else
    { printf("Not Anagrams\n"); }
    }
    return 0;
}