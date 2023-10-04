class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans=-1;
        vector<int> temp=nums;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int flag=0;
        
        if(nums[n-1] >= (2*nums[n-2])){
            flag=1;
        }

        if(flag==1){
            int largeVal = nums[n-1];
            for(int i=0;i<n;i++){
                if(largeVal==temp[i]){
                    return i;
                }
            }
        }

        return ans;
    }
};