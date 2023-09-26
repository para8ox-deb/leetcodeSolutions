class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        int res=0;
        for(auto i:mpp){
            if (i.second==1){
                res+=i.first;
            }   
        }

        return res;
    }
};