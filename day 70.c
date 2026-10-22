#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int newSentence = 1;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (newSentence && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            newSentence = 0;
        }
        else
        {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            newSentence = 1;
        }
    }

    printf("%s", str);

    return 0;
}