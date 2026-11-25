
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char* strs[], int strsSize)
{
    static char prefix[200];

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main()
{
    // Test Case 1: Common prefix exists
    char* words1[] = {"flower", "flow", "flight"};
    printf("Test Case 1: %s\n",
           longestCommonPrefix(words1, 3));

    // Test Case 2: No common prefix
    char* words2[] = {"dog", "racecar", "car"};
    printf("Test Case 2: \"%s\"\n",
           longestCommonPrefix(words2, 3));

    return 0;
}

