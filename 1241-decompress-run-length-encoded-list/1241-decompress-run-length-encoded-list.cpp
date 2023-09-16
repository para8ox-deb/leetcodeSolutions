class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i+=2){
            int k=nums[i];
            int val=nums[i+1];
            int j=0;
            while(j<k){
                res.push_back(val);
                j++;
            }
        }

        return res;
    }
};