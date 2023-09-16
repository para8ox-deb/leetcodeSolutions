class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {


        // SLiding window approach - O(n)

        // find sum for starting window
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        int maxSum = sum;

        // Starting sliding window now
        int start=0;
        int end=k;
        while(end<nums.size()){
            sum-=nums[start];
            start++;

            sum+=nums[end];
            end++;

            maxSum = max(maxSum,sum);
        }

        return (double)maxSum/k;




        // This approach TC - O(n*k) - Hence not accepted
        // double res;
        // int sum=0;
        // int maxxSub=INT_MIN,n=0;;
        // for(int i=0;i<nums.size()-k+1;i++){
        //     sum=0;
        //     for(int j=i;j<k+i;j++){
        //         sum+=nums[j];
        //     }

        //     maxxSub = max(maxxSub,sum);
        // }

        // return maxxSub/(k*1.0);
    }
};