// Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[100];
        scanf("%s", s);

        int len = strlen(s);
        if (strlen(s) <= 10)
        {

            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n", s[0], (len - 2), s[len - 1]);
        }
    }

    return 0;
}