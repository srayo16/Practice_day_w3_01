// Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];
    gets(a);
    gets(b);
    /* code */

    printf("%d %d\n%s%s\n", strlen(a), strlen(b), a, b);
    int c = a[0];
    a[0] = b[0];
    b[0] = c;
    printf("%s %s", a, b);

    return 0;
}