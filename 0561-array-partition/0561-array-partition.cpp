class Solution {
public:
    int arrayPairSum(vector<int>& nums) {


        // Taken from someone's solution
        
        int res=0;
        int n = nums.size();

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i+=2){
            res+=nums[i];
        }

        return res;
    }
};