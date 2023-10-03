class Solution {
public:
    int mySqrt(int x) {
        // It can be done using binary search in O(logn) time
        
        int s=0;
        int e=x;
        
        long long mid;
        int ans=0;
        while(s<=e){
            mid=s+(e-s)/2;

            if(mid*mid <= x){
                ans=mid;
                // move right
                s=mid+1;
            }
            else{
                //move left
                e=mid-1;
            }
        }

        return ans;
    }
};