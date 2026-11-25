
#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[])
{
    int count[26] = {0};

    if (strlen(s) != strlen(t))
        return 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    // Test Case 1: Valid anagram
    printf("Test Case 1: %s\n",
           isAnagram("anagram", "nagaram") ? "Valid Anagram" : "Not Anagram");

    // Test Case 2: Not an anagram
    printf("Test Case 2: %s\n",
           isAnagram("rat", "car") ? "Valid Anagram" : "Not Anagram");

    return 0;
}
