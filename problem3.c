#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100001];
    scanf("%s", s);

    // Replace commas with spaces
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
    }

    // Convert uppercase letters to lowercase and vice versa
    for (int i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }

    printf("%s", s);
    return 0;
}
