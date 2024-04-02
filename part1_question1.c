#include <stdio.h>
#include <ctype.h>

int my_isalpha(char letter)
{
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
    {
        return 1;
    }
    return 0;
}

int my_isdigit(char digit)
{
    if (digit >= '0' && digit <= '9')
    {
        return 1;
    }
    return 0;
}

int my_is_upper(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        return 1;
    }
    return 0;
}

char my_to_upper(char letter)
{
    if (letter >= 'a' && letter <= 'z')
    {
        return toupper(letter);
    }
    return letter;
}

char my_to_lower(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        return tolower(letter);
    }
    return letter;
}

int main()
{
    char letter1 = 'A', letter2 = 'b', number = '123';
    printf("Is alphabet %c - %d\nIs digit %c - %d\nIs uppercase %c - %d\nTo Upper %c - %c\nTo Lower %c - %c", letter1, my_isalpha(letter1), number, my_isdigit(number), letter1, my_is_upper(letter1), letter2, my_to_upper(letter2), letter1, my_to_lower(letter1));
}

