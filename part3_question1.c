#include <stdio.h>
#include <string.h>


void shift(char str[])
{
    int length = strlen(str);
    for (int i = 0; i< length; i++)
    {
        str[i] = str[i+1];
    }
    return;
}



int main()
{
    char  word[10];
    printf("enter word:");
    int d, i;
    scanf("%s", &word);
    d = strlen(word);
    
    for (int i = 0; i < d; i++)
    {
        shift(word);
        printf("%s", word);
        printf("\n");
    }
}