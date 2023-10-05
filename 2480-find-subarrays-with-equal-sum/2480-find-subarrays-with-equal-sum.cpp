class Solution {
public:
    bool findSubarrays(vector<int>& nums) {

        // subarrays are contiguous non empty sequence

        vector<int> sums;

        for(int i=0;i<nums.size()-1;i++){
            sums.push_back(nums[i]+nums[i+1]);
        }

        sort(sums.begin(),sums.end());

        for(int i=0;i<sums.size()-1;i++){
            if(sums[i]==sums[i+1])  return true;
        }
        
        return false;
    }
};