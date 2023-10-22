class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int counter=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int j=i;
                int val=nums[i];
                for(j;j<nums.size();j++){
                    nums[j]=nums[j]-val;
                }
                counter++;

            }
        }

        return counter;
    }
};