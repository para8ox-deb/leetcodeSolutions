class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        // three steps - 1. Find inflation point 2. Swap num before inflation with min diff number
        // 3. Sort the array from inflation point to end 
        
        int infpt = 0;
        int n = nums.size()-1;
        
        for(int i=n;i>0;i--){
            if(nums[i] > nums[i-1]) // inflation point condition
            {
                infpt = i;
                break;
            }
        }
        
        if(infpt == 0){
            sort(nums.begin(),nums.end());
        }
        else{
            int min = INT_MAX;
            int toswap = nums[infpt-1];
            
            for(int j=infpt; j<=n;j++){
                if(nums[j]-toswap>0 && nums[j]-toswap<min){
                    int temp = nums[j];
                    nums[j] = nums[infpt-1];
                    nums[infpt-1] = temp;
                }
            }
        }
        
        sort(nums.begin()+infpt,nums.end());
        
        
    }
};