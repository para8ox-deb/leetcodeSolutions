class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=INT_MIN;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int val = (nums[i]-1)*(nums[j]-1);
                res = max(res,val);
            }
        }

        return res;
    }
};