/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Method -1 this can be done using level order traversal and we can calculate the no of levels

    if(root==NULL){
        return 0;
    }

    int count=0;
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    
    //asli traversal start krte hai 
    
    while(q.size()>1){
        TreeNode* front = q.front();
        q.pop();
        
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                count++;
                q.push(NULL);
            } 
            
        }
        else{
            //valid node wala case 
            // cout<<front->data<<" ";
        
            if(front->left!=NULL){
                q.push(front->left);
            }
            
            if(front->right != NULL){
                q.push(front->right);
            }
        }
        
        
    }
    return count+1;


        // Method -2 other way using recursion

        //base case
        // if(root==NULL){
        //     return 0;
        // }

        // int leftHeight = maxDepth(root->left);
        // int rightHeight = maxDepth(root->right);
        // int height = 1 + max(leftHeight,rightHeight);
        // return height;
    }
};