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
        if(head == NULL||head->next == NULL||k == 0) return head;
        ListNode* temp = head;
        int len=1;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        temp->next=head;
        temp=head;
        k=k%len;
        for(int i=0;i<len-k-1;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        // int i=len-k;
        // ListNode* temp2 = head;
        // while(i!=0){
        //     temp2=temp2->next;
        //     i--;
        // }
        // ListNode* temp3 = temp2->next;
        // temp2->next=NULL;
        // while(temp3->next!=NULL){
        //     temp3=temp3->next;
        // }
        // temp3->next=head;
        // head=temp3;
        // return head;

    }
};