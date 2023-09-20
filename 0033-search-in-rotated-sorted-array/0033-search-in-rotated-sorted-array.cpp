class Solution {
public:

    int findPivotIndex(vector<int> &nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid = s+(e-s) /2;

        while(s<=e){
            mid=s+(e-s)/2;
            //corner case
            if(s==e)    return s;

            // Other cases
            if(mid-1 >=0 && nums[mid]<nums[mid-1]){ // mid-1>=0 VVIMP condition otherwise index becomes -1 and code do not work
                return mid-1;
            }
            else if(mid+1 < n && nums[mid]>nums[mid+1]){    // mid+1 < n, here also same index should not go out of bound
                return mid;
            }
            else if(nums[s]>nums[mid]){   // Means we're in B side
                e=mid-1;        // going left
            }
            else{
                s=mid+1;        // going right
            }
        }

        return -1;
    }

    int binarySearch(vector<int>& nums,int s, int e, int target){
        int mid=s+(e-s)/2;

        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int answer=-1;
        int pivotIndex = findPivotIndex(nums);

        if(target>=nums[0] && target<=nums[pivotIndex]){
            answer=binarySearch(nums,0,pivotIndex,target);
        }
        else{
            answer=binarySearch(nums,pivotIndex+1,nums.size()-1,target);
        }


        return answer;
    }
};