class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;

        unordered_map<int, int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it: mpp){
            int freq = it.second;
            res = (res + ((freq*(freq-1))/2));
        }

        return res;
    }
};