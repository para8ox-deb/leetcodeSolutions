class Solution {
public:
    
    void subSetGen(int ind, vector<int>& nums, vector<int> ds, vector<vector<int>> &ans, int n){
        
        //base case
        if(ind>=n){
            ans.push_back(ds);
            return;
        }
        
        //pick case - 
        ds.push_back(nums[ind]);
        subSetGen(ind+1,nums,ds,ans,n);
        
        ds.pop_back();
        subSetGen(ind+1,nums,ds,ans,n);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ds;
        vector<vector<int>> ans;
        
        subSetGen(0,nums,ds,ans,n);
        
        return ans;
    }
};