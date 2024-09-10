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
    ListNode* gcd(int a,int b){
        int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
        ListNode* cur= new ListNode();
        cur->val=result;
        return cur;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* ptr=head->next;
        ListNode* prev=head;
        while(ptr!=NULL){
            ListNode* curr= gcd(ptr->val,prev->val);
            curr->next=prev->next;
            prev->next=curr;
            prev=curr->next;
            ptr=ptr->next;
        }
        return head;
    }
};