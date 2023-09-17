class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum=0;
        for(auto i: nums){
            eleSum+=i;
        }

        int digitSum=0;
        int i=0;
        while(i<nums.size()){
            int val=nums[i];
            int digit;
            while(val){
                digit=val%10;
                val/=10;
                digitSum+=digit;
            }
            i++;
        }

        return abs(eleSum-digitSum);
        
    }
};