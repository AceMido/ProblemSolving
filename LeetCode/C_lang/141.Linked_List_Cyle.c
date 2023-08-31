#include "problems.h"
/* Definition for singly-linked list.*/
  struct ListNode {
      int val;
      struct ListNode *next;
 };
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = NULL;
    struct ListNode *fast = NULL;

    if (head == NULL)
    {
        return (false);
    }
    slow = head;
    fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return (true);
        }
    }
    return (false);
}