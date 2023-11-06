
class Solution {
public:

    ListNode* reverseUsingRecursion(ListNode* prev, ListNode* curr){
        //base case
        if(curr == NULL){
            return prev;
        }

        //we have solved one case
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev=curr;
        curr=nextNode;

        //recursion will handle this
        ListNode* recursionKaAns = reverseUsingRecursion(prev,curr);
        return recursionKaAns;
    }

    ListNode* reverseList(ListNode* head) {

        //recursive approach

        ListNode* prev = NULL;
        ListNode* curr = head;

        return reverseUsingRecursion(prev,curr);


        // Iterative Approach
        // ListNode* prev = NULL;
        // ListNode* curr = head;

        // while(curr!=NULL){
        //     ListNode* nextNode = curr->next;
        //     curr->next = prev;
        //     prev=curr;
        //     curr=nextNode;
        // }
        // return prev;
    }
};