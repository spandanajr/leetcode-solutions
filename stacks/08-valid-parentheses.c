
#include <stdio.h>
#include <string.h>

#define MAX 100

int isValid(char* s)
{
    char stack[MAX];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '['))
                return 0;
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1: Valid parentheses
    printf("Test Case 1: %s\n",
           isValid("()[]{}") ? "Valid" : "Invalid");

    // Test Case 2: Invalid parentheses
    printf("Test Case 2: %s\n",
           isValid("(]") ? "Valid" : "Invalid");

    return 0;
}

