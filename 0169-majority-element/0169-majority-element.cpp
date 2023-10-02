class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // method - 1   - TC - O(n logn)

        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};