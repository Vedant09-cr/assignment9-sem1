#include <stdio.h>

void analyze_string(char *str, int *vowels, int *consonants, int *digits, int *spaces, int *special)
{
    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            (*vowels)++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            (*consonants)++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            (*digits)++;
        }
        else if (ch == ' ')
        {
            (*spaces)++;
        }
        else if (ch != '\r')
        {
            (*special)++;
        }

        i++;
    }
}

int main()
{
    char str[200];
    int vowels, consonants, digits, spaces, special;

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyze_string(str, &vowels, &consonants, &digits, &spaces, &special);

    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
    printf("digits: %d\n", digits);
    printf("spaces: %d\n", spaces);
    printf("special characters: %d\n", special);

    return 0;
}
