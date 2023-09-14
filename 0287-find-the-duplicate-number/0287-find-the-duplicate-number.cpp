class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return 0;


        // NOT WORKING COZ - DUPLICATES NO CAN BE MORE THAN 2
        // int ans=0;

        // for(int i=0;i<nums.size();i++){
        //     ans=ans^nums[i];
        // }

        // cout<<ans<<endl;        // will result in 6 (for first case ) - 6 binary : 110

        // for(int i=1;i<nums.size();i++){
        //     ans=ans^i;
        // }

        // cout<<ans;              // it will give the result (for first case ) - 2 answer

        // return ans;
        


    }
};