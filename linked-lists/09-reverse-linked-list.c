
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void display(struct ListNode* head)
{
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* first = malloc(sizeof(struct ListNode));
    struct ListNode* second = malloc(sizeof(struct ListNode));
    struct ListNode* third = malloc(sizeof(struct ListNode));

    first->val = 1;
    first->next = second;

    second->val = 2;
    second->next = third;

    third->val = 3;
    third->next = NULL;

    printf("Original List: ");
    display(first);

    struct ListNode* reversed = reverseList(first);

    printf("Reversed List: ");
    display(reversed);

    // Free allocated memory
    while (reversed != NULL)
    {
        struct ListNode* temp = reversed;
        reversed = reversed->next;
        free(temp);
    }

    return 0;
}
