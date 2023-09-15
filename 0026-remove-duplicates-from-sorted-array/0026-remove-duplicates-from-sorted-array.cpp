class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // Other way - efficient method
        int j=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[j] = nums[i];
                j++;
            }
        }

        nums[j] = nums[nums.size()-1];
        j++;
        
        return j;


        // One way to use set 
    }
};