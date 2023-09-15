class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr(nums.size());
        int sum=0;

        for(int i=0;i<nums.size();i++){
            arr[i] = nums[i]+sum;
            sum+=nums[i];
        }

        return arr;
    }
};