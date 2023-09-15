class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        // First approach
        int n=nums.size();

        for(int i=0;i<n;i++){
        int lsum=0;
        int rsum=0;

            for(int j=0;j<i;j++){
                lsum+=nums[j];
            }

            for(int k=i+1;k<n;k++){
                rsum+=nums[k];
            }

            if(lsum==rsum)
                return i;
        }



        // Second Approach
        // int sum=0;

        // for(int i=0;i<nums.size();i++){
        //   sum+=nums[i];
        // }

        // int leftSum=0;

        // for(int i=0;i<nums.size();i++){
        //   if(leftSum==sum-leftSum-nums[i]){
        //     return i;
        //   }
        //   leftSum+=nums[i];
        // }

        return -1;
    }
};