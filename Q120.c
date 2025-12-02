/* Q120: Write a program to take a string input. Change it to sentence case.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int i = 0;
    if(str[0] >= 'a' && str[i+1] <= 'z')
    { str[0] = str[0] - 32; }
    while(str[i] != '\0')
    { if(str[i] == ' ')
    { if(str[i+1] >= 'a' && str[i+1] <= 'z')
    { str[i+1] = str[i+1] - 32; }
    }
    i++;
    }
    printf("Sentence is: %s\n", str);
    return 0;
}