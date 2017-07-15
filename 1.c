#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char string[MAX_SIZE], reverse[MAX_SIZE];
    int i, j, l;
 
    printf("Enter any string: ");
    gets(string);
 
    l = strlen(string);
    j = 0;
 
    for(i=l-1; i>=0; i--)
    {
        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0';
 
    printf("\nOriginal string = %s\n", string);
    printf("Reverse string = %s", reverse);
 
    return 0;
}
