class Solution {
public:
    
    void findSubSet(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
        ans.push_back(ds);
        //empty subset is selected
        
        // now first we will select all single ele subset, then 2 ele, then 3 ele and so on
        for(int i=ind; i<nums.size(); i++){ //using loop i.e. going level by level in recursion
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