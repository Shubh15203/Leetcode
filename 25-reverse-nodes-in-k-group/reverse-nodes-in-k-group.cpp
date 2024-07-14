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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head==NULL || k==1) return head;
        ListNode *dummy=new ListNode();
        dummy->next=head;
        ListNode *pre=dummy, *cur=dummy, *nex=dummy;
        int count=0;
        while(cur->next!=NULL){
            count++;
            cur=cur->next;
        }
        int i;
        while(count>=k){
            cur=pre->next;
            nex=cur->next;
            for(i=1;i<k;i++){
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            count-=k;
            pre=cur;
        }
        return dummy->next;

    }
};