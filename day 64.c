#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int last[256];
    int start = 0, maxLen = 0;

    scanf("%999s", s);

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        unsigned char c = s[i];

        if (last[c] >= start)
            start = last[c] + 1;

        last[c] = i;

        int len = i - start + 1;

        if (len > maxLen)
            maxLen = len;
    }

    printf("%d", maxLen);

    return 0;
}