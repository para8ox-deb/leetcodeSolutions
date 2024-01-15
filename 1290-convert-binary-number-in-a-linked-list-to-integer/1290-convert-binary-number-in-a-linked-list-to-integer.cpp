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
    int getDecimalValue(ListNode* head) {
        int val = 0;
        int len=0;
        ListNode* temp = head;

        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        // cout<<len;
        len--;

        temp = head;

        while(temp!=NULL){
            val = val + (pow(2,len) * temp->val);
            len--;

            temp = temp->next;
        }

        return val;
    }
};