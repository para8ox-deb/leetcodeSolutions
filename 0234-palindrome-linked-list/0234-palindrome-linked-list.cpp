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
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL){
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
                slow=slow->next;
            }
        }

        return slow;
    }

    ListNode* reverseList(ListNode* head) {
        // / Iterative Approach
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!=NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }

    bool compareList(ListNode* head1, ListNode* head2){
        // while(head1!=NULL && head2!=NULL){
        while(head2!=NULL){ // it will work coz head2 or other half of list will always be smaller than the first half (in odd case)
            if(head1->val != head2->val){
                return false;

            }
            else{
                head1=head1->next;
                head2=head2->next;
            }
        }
        return true;
    }


    bool isPalindrome(ListNode* head) {
        // break into 2 halves
        // reverse the second part
        // compare both LL

        // Code to find middleNode (note - even case we need first one)
        
        ListNode* midNode = middleNode(head);
        ListNode* head2 = midNode ->next;   // second or other half of LL
        midNode->next = NULL;   // breaking the link

        //after reversing the other half of LL
        head2 = reverseList(head2);

        //comparing both the LL
        bool ans = compareList(head, head2);

        return ans;

    }
};