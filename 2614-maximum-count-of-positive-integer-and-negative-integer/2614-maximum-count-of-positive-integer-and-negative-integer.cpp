class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int pos=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                //positive no
                pos++;
            }
            else if(nums[i]<0){
                //neg no
                neg++;
            }
        }

        return max(pos,neg);
    }
};