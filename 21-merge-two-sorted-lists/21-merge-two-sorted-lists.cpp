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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans= new ListNode(0);
        ListNode* ans1= ans;
        ListNode* temp1= list1;
        ListNode* temp2= list2;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<temp2->val){
                ans->next=temp1;
                ans=ans->next;
                temp1=temp1->next;  
            }
            else{
            ans->next=temp2;
                  ans=ans->next;
            temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
             ans->next=temp1;
              ans=ans->next;
                temp1=temp1->next;
        }
        while (temp2!=NULL){
           ans->next=temp2;
              ans=ans->next;
            temp2=temp2->next; 
        }
        return ans1->next;
        
    }
};