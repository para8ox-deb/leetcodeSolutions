class Solution {
public:

    int binarySearch(vector<int>& arr, int s, int x){
        int e=arr.size()-1;

        while(s<=e){
            int mid = s+(e-s)/2;

            if(arr[mid]==x){
                return mid;
            }
            else if(arr[mid]>x){
                // go left
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        
        // M-1 : Brute force approach will take O(n^2) and there we have to handle same pairs also

        // M-3: Binary Search Method
        sort(nums.begin(),nums.end());
        
        set<pair<int,int>> ans;

        for(int i=0;i<nums.size();i++){
            int val = nums[i]+k;
            if(binarySearch(nums,i+1,val)!=-1){
                ans.insert({nums[i],val});
            }
        }

        return ans.size();

        // M-2: Two pointer method
        
        // int i=0,j=1;
        // int diff;
        // // int ans=0;       // we will not use variable to store coz we need distinct pair

        // set<pair<int,int>> ans; // set of pair type
        // sort(nums.begin(),nums.end());
        // while(j<nums.size()){
        //     diff=nums[j]-nums[i];

        //     if(diff==k){
        //         ans.insert({nums[i],nums[j]});      // inserting into set pair
        //         // cout<<nums[i]<<" "<<nums[j]<<endl;
        //         i++;
        //         j++;
        //     }
        //     else if(diff>k){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }

        //     if(i==j){   // when both i and j are on same so we have to increase j otherwise it will give 1-1, 2-2 so we don;t want this.
        //         j++;
        //     }
        // }

        // return ans.size();
    }
};