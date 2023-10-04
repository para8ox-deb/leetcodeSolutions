class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ans;
        // since asking for distinct so we'll use set
        set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        // Now taking the set data to vector
        vector<int> disNum;
        for(auto it: s){
            disNum.push_back(it);
        }

        sort(disNum.begin(), disNum.end());
        int disSize = disNum.size();
        if(disNum.size()<3){
            ans = disNum[disSize-1];
        }
        else if(disSize==3){
            ans = disNum[0];
        }
        else{
            int diff = disSize-3;
            ans = disNum[diff];
        }

        return ans;
    }
};