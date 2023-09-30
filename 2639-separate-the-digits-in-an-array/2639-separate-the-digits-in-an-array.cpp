class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            vector<int> digits;
            while(val>0){
                digits.push_back(val%10);
                val/=10;
            }
            reverse(digits.begin(),digits.end());

            res.insert(res.end(),digits.begin(),digits.end());
        }

        return res;
    }
};