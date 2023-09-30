class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=INT_MAX;
        int great=INT_MIN;
        int gcd=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++){
            small = min(small,nums[i]);
            great = max(great,nums[i]);
        }

        for(int i=1;i<=great;i++){
            if(small%i==0 && great%i==0){
                gcd = i;
            }
        }

        return gcd;
        
    }
};