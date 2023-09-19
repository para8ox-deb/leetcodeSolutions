class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> lSum;
        vector<int> rSum;
        vector<int> result(nums.size());
        int sum=0;

        for(int i=0;i<nums.size();i++){
            lSum.push_back(sum);
            sum+=nums[i];
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            rSum.push_back(sum);
            sum+=nums[i];
        }

        reverse(rSum.begin(),rSum.end());

        for(int i=0;i<nums.size();i++){
            result[i] = abs(rSum[i]-lSum[i]);
        }

        return result;
    }
};