class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int i=0;

        while(i<nums.size()){
            if(nums[i]==target){
                res.push_back(i);
            }

            i++;
        }

        return res;
    }
};