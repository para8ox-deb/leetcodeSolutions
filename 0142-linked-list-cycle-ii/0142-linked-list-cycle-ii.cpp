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
            // check for loop
        ListNode* slow = head;
        ListNode* fast=head;
        
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow = slow->next;
            }
            if(fast==slow){
                break;
            }
        }

        if(fast==NULL){
            //no cycle present
            return NULL;
        }
        
        //yha pohocha, iska mtlb slow and fast meet kr gye 
        slow=head;
        
        // slow and fast -> step 
        while(fast!=slow){
            slow=slow->next;
            fast=fast->next;
        }
        //returning starting point 
        return slow;
    }
};