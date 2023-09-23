class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        // Brute force approach will take O(n^2) and there we have to handle same pairs also


        // Two pointer method
        int i=0,j=1;
        int diff;
        // int ans=0;       // we will not use variable to store coz we need distinct pair

        set<pair<int,int>> ans; // set of pair type
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            diff=nums[j]-nums[i];

            if(diff==k){
                ans.insert({nums[i],nums[j]});
                // cout<<nums[i]<<" "<<nums[j]<<endl;
                i++;
                j++;
            }
            else if(diff>k){
                i++;
            }
            else{
                j++;
            }

            if(i==j){   // when both i and j are on same so we have to increase j otherwise it will give 1-1, 2-2 so we don;t want this.
                j++;
            }
        }

        return ans.size();
    }
};