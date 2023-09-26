class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        int e = nums.size()-1;
        int ans;
        int mid = s+(e-s)/2;


        while(s<=e){
            mid = s+(e-s)/2;

            if(mid%2==0){   // when mid i.e. index is even
                if(nums[mid]==nums[mid+1] && mid+1<=nums.size()-1){
                    // move right
                    s=mid+2;
                }
                else if(nums[mid-1]==nums[mid] && mid-1>=0){
                    //left jao
                    e=mid-2;
                }
                else{
                    ans=nums[mid];
                    break;
                }

            }
            else{       // when mid i.e. index is odd
                if(nums[mid-1]==nums[mid] && mid-1>=0){
                    // move right
                    s=mid+1;
                }
                else{
                    // move left
                    e=mid-1;
                }
            }
        }

        return ans;
    }
};