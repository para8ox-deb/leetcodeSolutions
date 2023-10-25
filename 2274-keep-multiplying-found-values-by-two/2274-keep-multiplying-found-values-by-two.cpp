class Solution {
public:

    bool bs(vector<int> & nums,int t){
        int s=0;
        int e=nums.size()-1;

        while(s<=e){
            int mid = s+(e-s)/2;

            if(t==nums[mid]){
                return true;
            }
            else if(nums[mid]>t){
                // move left
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return false;
    }

    int findFinalValue(vector<int>& nums, int original) {
        int ans;
        ans = original;
        sort(nums.begin(),nums.end());
        while(bs(nums,original)){
            original*=2;
            ans=original;
        }

        return ans;
    }
};