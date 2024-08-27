/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode *ptr=head;
        if(head==nullptr||head->next==nullptr)return nullptr;

        map<ListNode*,int> mp;
        int c=0;
        while(ptr!=NULL){
            if(mp.find(ptr) != mp.end()){
                break;
            }
            c++;
            mp[ptr]=c;
            ptr=ptr->next;
        }
        return ptr; 
       
    }
};