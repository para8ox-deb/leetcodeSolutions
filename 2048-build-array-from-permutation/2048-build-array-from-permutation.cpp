class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int ind = nums[i];
            ans.push_back(nums[ind]);
        }

        return ans;
    }
};