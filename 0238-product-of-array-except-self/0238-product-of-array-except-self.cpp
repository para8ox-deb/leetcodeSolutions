class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Other method w/o division operation
        


        // Working but using division here
        vector<int> res;
        int n=nums.size();
        int mul=1;
        int zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                mul = mul*nums[i];
            else{
                zero++;
            }
        }

        for(int i=0;i<n;i++){
            // handling when zero is there
            int val;
            if(zero>1){
                res.push_back(0);

            }
            else if(zero==1){
                if(nums[i]==0){
                    res.push_back(mul);
                }
                else{
                    res.push_back(0);
                }
            }
            else{
                if(nums[i]!=0){
                    val = mul/nums[i];
                } 

                res.push_back(val);
            }
           
        }

        return res;
    }
};