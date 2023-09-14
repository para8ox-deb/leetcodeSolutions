class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        // Fast approach

        int n=arr.size();
        int s=0;
        int e=n-1;

        int mid;

        while(s<e){
            mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }

            
        }

        return s;







        // O(n^2) - method
        // int maxx=0;

        // for(int i=0;i<arr.size();i++){
        //     maxx=max(maxx,arr[i]);
        // }

        // for(int i=0;i<arr.size();i++){
        //     if(maxx==arr[i]){
        //         return i;
        //     }
        // }

        // return 0;

    }
};