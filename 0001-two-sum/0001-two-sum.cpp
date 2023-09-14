class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n=nums.size();
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    flag=1;
                }

                }
            }
            if(flag==1){
                break;
            }
        }

        return res;
    }
};