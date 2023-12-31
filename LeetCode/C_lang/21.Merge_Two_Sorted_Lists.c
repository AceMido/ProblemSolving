#include "problems.h"
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode dummy = {0}; // Dummy head node
    struct ListNode *tail = &dummy; // Tail node of merged list
    
    // Merge the two lists
    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    
    // Append remaining nodes of list1 or list2
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }
    
    // Return the merged list
    return dummy.next;
}