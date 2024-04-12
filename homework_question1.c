#include <stdio.h>
#include <string.h>

char *ToPigLatin (char * word)
{
    int length = strlen(word);
    char way[] = "way", ay[] = "ay", test[100], extension[100];
    for (int i =0; i < length; i++)
    {
        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] < 'z') || word[i] == 39)
        {
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' ||
            word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
            {
                return strcat(word, way);
            }
            else if (word[0] != 'a' || word[0] != 'e' || word[0] != 'i' || word[0] != 'o' || word[0] != 'u' ||
                    word[0] != 'A' || word[0] != 'E' || word[0] != 'I' || word[0] != 'O' || word[0] != 'U')
            {
                int k = 0;
                do
                {
                    extension[k] = word[k];
                    k++;
                }
                while (word[k] != 'a' || word[k] != 'e' || word[k] != 'i' || word[k] != 'o' || word[k] != 'u' ||
                      word[k] != 'A' || word[k] != 'E' || word[k] != 'I' || word[k] != 'O' || word[k] != 'U');
                return strcat(word,ay);
            }
        }
    }
}

char *my_strcat(char string1[], char string2[])
{
    int i = 0, k= 0;
    while (string1[k] != '\0')
    {
        k++;
    }
    while (string1[i] != '\0')
    {
        string1[k+i] = string2[i];
        i++;
    }
    return string1;
}


int main() 
{
    int pos; 
    char str[25];
    printf("enter a string "); 
    scanf("%s", &str);
    printf("%s", ToPigLatin(str));
}   