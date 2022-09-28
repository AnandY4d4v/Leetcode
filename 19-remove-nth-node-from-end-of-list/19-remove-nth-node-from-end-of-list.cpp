/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* prev = NULL;
    ListNode* curr = head;
    
    int size = 0, i=1;
    
    while(curr != NULL)
    {
        size++;
        curr = curr->next;
    }
	
    if(size==1)
    {
        delete(head);
        return prev;
    }
	
    if(size == n)
    {
        head = head->next;
        return head;
    }
	
    curr = head;
    prev = head;
    while(i != size-n)
    {
        prev = prev->next;
        i++;
    }
    curr = prev->next;
    prev->next = curr->next;
    
    delete(curr);
    return head;
    }
};