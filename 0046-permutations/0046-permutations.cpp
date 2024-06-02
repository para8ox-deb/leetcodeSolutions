class Solution {
public:
    
    void recurPerm(int ind, vector<int> &nums, vector<vector<int>> &ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=ind; i<nums.size(); i++){
            swap(nums[ind], nums[i]);
            recurPerm(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
    
    
    
    // method-1 it takes more space as we use freq over here
    
//     void permFind(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]){
//         //base case 
//         if(ds.size()==nums.size()){
//             ans.push_back(ds);
//             return;
//         }
        
//         for(int i=0;i<nums.size();i++){
//             if(!freq[i]){
//                 ds.push_back(nums[i]);
//                 freq[i]=1;
                
//                 permFind(ds,nums,ans,freq);
//                 freq[i]=0;
//                 ds.pop_back();
//             }
//         }
//     }
    
    vector<vector<int>> permute(vector<int>& nums) {
        //approach 1
        // vector<vector<int>> ans;
        // vector<int> ds;
        // int freq[nums.size()];
        // for(int i=0;i<nums.size();i++) freq[i]=0;
        // permFind(ds,nums,ans,freq);
        
        
        //approach 2 - better one
        vector<vector<int>> ans;
        recurPerm(0,nums,ans);
        
        
        return ans;
    }
};