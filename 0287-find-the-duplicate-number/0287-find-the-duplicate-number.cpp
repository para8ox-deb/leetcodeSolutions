class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // first approach   - sort and then find TC - O(nlogn)


        // second approach - marking visited ele as negative and then finding duplicate
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index = abs(nums[i]);

            if(nums[index]<0){
                ans= index;
            }

            nums[index]*=-1;
        }

        return ans;


        //third approach - positioning wali

        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
        

    }
};