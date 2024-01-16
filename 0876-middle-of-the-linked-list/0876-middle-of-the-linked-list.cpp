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
        
//         int len=0;

//         ListNode* temp = head;

//         while(temp!=NULL){
//             len++;
//             temp = temp->next;
//         }

//         int trueLen;

//         if(len%2!=0){
//             trueLen = (len+1)/2;
//         }
//         else{
//             trueLen = len/2 + 1;
//         }


//         int val=0;

//         temp = head;

//         while(temp!=NULL){

//             if(val==trueLen-1){
//                 break;
//             }

//             val++;
//             temp = temp->next;
//         }

//         return temp;
        
        
        
        
        //  USING SLOW & FAST APPROACH
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL)
        {
            fast = fast->next; // 1 step move 

            if(fast != NULL)
            {
                fast = fast->next; // move fast 1 step more
                slow = slow->next; // move slow 1 step
            }
        }
        return slow;
    }
};