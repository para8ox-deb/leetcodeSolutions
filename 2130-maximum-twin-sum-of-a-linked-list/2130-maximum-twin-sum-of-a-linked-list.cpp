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
    int pairSum(ListNode* head) {
        
        stack<int> s;

        // if(head==NULL || head->next==NULL){
        //     return head;
        // }

        ListNode* temp = head;
        while(temp!=NULL){
            s.push(temp->val);
            temp = temp->next;
        }

        
        int maxSum = 0;

        while(head!=NULL){
            int sum = head->val + s.top();
            if(maxSum<sum){
                maxSum = sum;

            }
            s.pop();
            head=head->next;
        }

        return maxSum;
    }
};