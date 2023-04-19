// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    char replace[1000];
    for (int i = 0; i <= strlen(s); i++)
    {
        replace[i] = s[i];
    }

    for (int i = 0; i < strlen(s) / 2; i++)
    {
        char temp = s[i];
        s[i] = s[(strlen(s) - 1) - i];
        s[(strlen(s) - 1) - i] = temp;
    }
    int result = strcmp(s, replace);
    if (result == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    // printf("%s\n", replace);
    // printf("%s\n", s);

    return 0;
}