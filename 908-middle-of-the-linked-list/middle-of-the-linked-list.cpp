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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if (fast==NULL ){
                
                break;
            }
            else{
            fast=fast->next;
            slow=slow->next;
        }}
        // vector<int> ans;
        // while(slow!=NULL){
        //     ans.push_back(slow->val);
        //     slow=slow->next;
        // }
        
        return slow;

    }
};