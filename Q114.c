
#include <stdio.h>
int main()
{
    int i, j, e, f = 0, length = 0, length1 = 0;
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '\0'; i++)
    { if(str[i] == '\n')
    { str[i] = '\0';
      break; }
      length++;
    }
    int max_length[length], repeated;  
    for(e=0; e<length; e++)
    { length1 = 0;
    for(i=f; i<=e; i++)
    { repeated = 0;
    for(j=i; j<e; j++)
    { if(str[j] == str[e])
    { repeated = 1;
      break; } 
    }
    if(repeated)
    { f = i + 1; }
    else
    { length1 = e - f + 1; }
    }
    max_length[e] = length1;
    }
    for(i=0; i<length; i++)
    { for(j=0; j<length-i-1; j++)
    { if(max_length[j] < max_length[j + 1])
    { int temp = max_length[j];
      max_length[j] = max_length[j + 1];
      max_length[j + 1] = temp; }
    } }
    printf("The longest substring is of size %d\n", max_length[0]);
    return 0;
}

