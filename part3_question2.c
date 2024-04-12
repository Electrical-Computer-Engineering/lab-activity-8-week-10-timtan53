#include <stdio.h>
#include <string.h>

void similar(char str1[], char str2[])
{
    int length, length2, removed = 0, boolean, j = 0;
    length = strlen(str1);
    length2 = strlen(str2);
    
    for (int i = 0; i < length; i++)
    {
        boolean = 0;

        for (int j = 0; j < length2; j++)
        {
            if (str1[i] == str2[j])
                boolean = 1;
        }

        if (!boolean)
        {
            str1[j] = str1[i]; 
            j++;
        }
        else 
            removed++;
    }
    str1[j] = '\0';
    return;
}

int main()
{
    char string[] = "Hi ESE 124!";
    char remove[] = "Hi !";
    similar(string, remove);
    printf("String: %s\n", string);
}
