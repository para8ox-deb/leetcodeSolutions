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

    // Function to return gcd of a and b 
    int gcd(int a, int b) 
    { 
        // Find Minimum of a and b 
        int result = min(a, b); 
        while (result > 0) { 
            if (a % result == 0 && b % result == 0) { 
                break; 
            } 
            result--; 
        } 
        // Return gcd of a and b 
        return result; 
    } 



    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp->next!=NULL){
            
            int a = temp->val;
            int b = temp->next->val;

            int gcdVal = gcd(a,b);
            cout<<gcdVal<<endl;
            ListNode* newNode = new ListNode;
            newNode->val = gcdVal;
            newNode->next = temp->next;
            temp->next = newNode;

            temp = temp->next->next;

        }
        return head;
    }
};