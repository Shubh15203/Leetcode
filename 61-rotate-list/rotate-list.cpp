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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL || head->next==NULL) return head;
        ListNode *curr=head;
        ListNode *prev=nullptr;
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if (k>count) k=k%count;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        for(int i =0;i<k;i++){
            curr->next=head;
            prev->next=NULL;
            head=curr;
            while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        }
        return head;

    }
};