class Solution {
public:

    int squareRootCalc(int n){
        int start=0;
        int end=n;

        long long mid= start + (end-start)/2;
        int ans=0;
        while(start<=end){
            mid = start + (end-start) / 2;

            if(mid*mid > n){
                // move left
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }

        return ans;
    }

    bool isPerfectSquare(int num) {
        
        // Best approach using Binary search

        int sqrt = squareRootCalc(num);
        if(sqrt*sqrt==num)
            return true;

        
        return false;
        



        // Worst Method 
        // int res;
        // res = sqrt(num);

        // if(res*res==num){
        //     return true;
        // }

        // return false;
    }
};