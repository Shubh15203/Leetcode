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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return head;
        ListNode* prev=head;
        ListNode* ptr=head;
        int i=0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        while(ptr!=NULL ){
            int x=ptr->val;
            if(mp.find(x)!= mp.end()){
                if(prev==ptr) {
                    head=head->next;
                    ptr=head;
                    prev=head;
                }
                else{prev->next=ptr->next;
                
                ptr=prev->next;}
            }
            else{
                prev=ptr;
                ptr=ptr->next;
            }
        }
        return head;

    }
};