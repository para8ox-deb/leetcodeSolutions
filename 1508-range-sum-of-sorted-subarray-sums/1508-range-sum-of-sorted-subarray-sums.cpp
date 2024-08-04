#define mod 1000000007

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<int> subarray;

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                subarray.push_back(sum % mod);
            }
        }

        // for(int i=0;i<subarray.size();i++){
        //     cout<<subarray[i]<<" ";
        // }

        sort(subarray.begin(),subarray.end());
        int res=0;

        for(int i=left-1;i<right;i++){
            // cout<<subarray[i]<<" ";
            res = (res + subarray[i]) % mod;
        }

        return res;
    }
};