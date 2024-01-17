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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len=0;

        ListNode* temp = head;
        ListNode* res = temp;

        while(temp!=NULL){
            len++;
            temp = temp->next;
        }

        // if(len==1 && n==1){
        //     ListNode* res1 = NULL;
        //     return res1;
        // }

        int toDel = (len-n)+1;

        temp = head;

        if(toDel==1){
            ListNode* newHead = head->next;
            return newHead;
        }

        int x=1;
        while(temp!=NULL){
            if((x+1)==toDel){
                temp->next = temp->next->next;
                break;
            }
            x++;
            temp = temp->next;
        }

        return res;
    }
};