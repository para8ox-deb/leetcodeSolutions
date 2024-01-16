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
        
        int len=0;

        ListNode* temp = head;

        while(temp!=NULL){
            len++;
            temp = temp->next;
        }

        int trueLen;

        if(len%2!=0){
            trueLen = (len+1)/2;
        }
        else{
            trueLen = len/2 + 1;
        }


        int val=0;

        temp = head;

        while(temp!=NULL){

            if(val==trueLen-1){
                break;
            }

            val++;
            temp = temp->next;
        }

        return temp;
    }
};