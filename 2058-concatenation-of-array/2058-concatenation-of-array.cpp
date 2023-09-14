class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int k=0;
        while(k<2){
            for(int i=0;i<nums.size();i++){
                result.push_back(nums[i]);
            }

            k++;
        }

        return result;
    }
};