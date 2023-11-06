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
    bool hasCycle(ListNode *head) {
        
        //method1 - using map (checking address)
        map<ListNode*, bool> table;
        
        ListNode* temp = head;
        while(temp!=NULL){
            if(table[temp]==false){
                table[temp]=true;
            }
            else{
                //cycle present
                return true;
            }
            temp = temp->next;
        }
        //loop not found
        return false;
    }
};