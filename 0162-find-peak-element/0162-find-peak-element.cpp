class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxx=max(nums[i],maxx);
        }

        for(int i=0;i<nums.size();i++){
            if(maxx==nums[i]){
                return i;
            }
        }

        return 0;
    }
};