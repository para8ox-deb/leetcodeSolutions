class Solution {
public:

    bool binarySearch(vector<int>& nums, int t){
        int s=0;
        int e=nums.size()-1;
        int mid;

        while(s<=e){
            mid = s+(e-s)/2;

            if(nums[mid]==t){
                return true;
            }
            else if(t>nums[mid]){
                // move right
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

        return false;
    }

    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        // First we have to sort nums
        sort(nums.begin(),nums.end());

        vector<int> res;

        for(int i=1;i<=nums.size();i++){
            bool val = binarySearch(nums,i);

            if(val==false){
                res.push_back(i);
            }
        }

        return res;
    }   
};