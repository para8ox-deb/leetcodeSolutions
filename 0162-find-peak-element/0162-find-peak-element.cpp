class Solution {
public:
    int findPeakElement(vector<int>& nums) {


        // Better approach

        int s=0;
        int e=nums.size()-1;

        int mid = s+(e-s)/2;

        while(s<e){
            mid = s+(e-s)/2;
            if(nums[mid]<nums[mid+1]){
                // Means we are in A side   - we'll go to right side
                s=mid+1;
            }
            else{
                // It means either we're on peak ele or in B side - we'll go left
                e=mid;  //e=mid-1; not used coz if we do that then we might lose peak element
            }
        }
        
        return s;   //return e will also work at last both will be at same only
        




        // Working but TIME COMPLEXITY - O(n)

        // int maxx=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     maxx=max(nums[i],maxx);
        // }

        // for(int i=0;i<nums.size();i++){
        //     if(maxx==nums[i]){
        //         return i;
        //     }
        // }

        // return 0;
    }
};