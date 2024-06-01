class Solution {
public:
    
    void findSubSet(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
        ans.push_back(ds);
        
        for(int i=ind; i<nums.size(); i++){
            if(i!=ind && nums[i]==nums[i-1]) continue; //duplicate ele so leave it
            
            ds.push_back(nums[i]);
            findSubSet(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findSubSet(0, nums,ds, ans);
        return ans;
    }
};