#include <stdio.h>
#include <string.h>

int my_strcmp(char String1[], char String2[])
{   
    int length = 0, i = 0, value = 0;

    while (String1[i] != '\0')
    {
        length++;
        if (String1[i] == String2[i] && String1[i+1] == String2[i+1])
            value = 0;
        else
            value = 1;
        i++;
    }
    return value;
}

int my_strncmp(char string1[], char string2[], int n)
{
    for (int k = 0; k < n; k++)
    {
        if (string1[k] != string2[k])
            return 0;
    }
    return 1;
}

char *my_strcpy(char string1[], char string2[])
{
    int i = 0;
    while (string2[i] != '\0')
    {
        string1[i] = string2[i];
        i++;
    }
    return string1;
}

char *my_strcat(char string1[], char string2[])
{
    int i = 0, k= 0;
    while (string1[k] != '\0')
    {
        k++;
    }
    while (string2[i] != '\0')
    {
        string1[k+i] = string2[i];
        i++;
    }
    return string1;
}

char *my_reverse(char string1[], char string2[])
{
    int i = 0, j = 0, k = 0, count = strlen(string2);
    char temp;

    for (int i = 0, j = count - 1; i <= j; i++, j--) {
        temp = string2[i];
        string2[i] = string2[j];
        string2[j] = temp;
    }
    for (int i = 0; i < count; i++)
    {
        string1[i] = string2[i];
    }
    return string1;
}

int main()
{
    char one[32] = "hello" , two[32] = "hello";
    // printf("reverse = %s\n", my_reverse(one, two));
    // printf("compare first 2 = %d\n", my_strncmp(one, two, 2));
    // printf("append = %s\n", my_strcat(one, two));
    // printf("copy = %s\n", my_strcpy(one, two));
    printf("compare = %d\n", my_strcmp(one, two));
}
