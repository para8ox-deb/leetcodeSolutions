class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
    int k = 0; // Count of 1s
    for (int num : nums) {
        k += num;
    }

    int ones = 0, maxOnes = 0;
    for (int i = 0; i < 2 * n; i++) {
        ones += nums[i % n];
        if (i >= k) {
            ones -= nums[(i - k) % n];
        }
        maxOnes = max(maxOnes, ones);
    }

    return k - maxOnes;
    }
};