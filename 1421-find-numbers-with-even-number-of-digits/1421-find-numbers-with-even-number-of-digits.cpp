class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;

        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            long long counter=0;
            int digit;
            while(val){
                digit=val%10;
                val/=10;
                counter++;
            }
            if(counter%2==0){
                res++;
            }
        }

        return res;
    }
};