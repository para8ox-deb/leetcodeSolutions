class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int counter=0;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[j]-nums[i])==k){
                    counter++;
                }
            }
        }

        return counter;
    }
};