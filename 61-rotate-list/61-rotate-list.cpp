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
    private:
    void insertathead(ListNode* &head, int d) {
        ListNode* temp= new ListNode(d);
  temp -> next = head;
  head = temp;
}
    ListNode* solve(ListNode* &head){
       ListNode* curr=head->next;
        ListNode* prev=head;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        cout<<curr->val;
        insertathead(head, curr->val);
        cout<<" "<<prev->val;
        prev->next=NULL;
        cout<<" "<<prev->val;
        return head;
        
    }
    int getlen(ListNode* head){
        int l=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        return l;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        //ListNode*
         if(head==NULL) return head;
        if(head->next==NULL) return head;
        int n=getlen(head);
        k=k%n;
        while(k--){
        solve(head);
        }
      return head;  
    }
};