class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        
        // TO THINK - O(n) (Two pointer kinda)
        vector<int> res(nums.size());

        int even=0;
        int odd=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[even] = nums[i];
                even+=2;
            }
            else{
                res[odd] = nums[i];
                odd+=2;
            }
        }

        return res;

















        // One way but memory intensive method

        // vector<int> v1;
        // vector<int> v2;
        // vector<int> res;

        // int size = nums.size();
        
        // for(int i=0;i<size;i++){
        //     if(nums[i]>0)
        //         v1.push_back(nums[i]);
        //     else
        //         v2.push_back(nums[i]);
        // }

        // for(int i=0;i<size/2;i++){
        //     res.push_back(v1[i]);
        //     res.push_back(v2[i]);
        // }
        
        // return res;

        
    }
};