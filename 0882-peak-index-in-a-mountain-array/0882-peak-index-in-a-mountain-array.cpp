class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxx=0;

        for(int i=0;i<arr.size();i++){
            maxx=max(maxx,arr[i]);
        }

        for(int i=0;i<arr.size();i++){
            if(maxx==arr[i]){
                return i;
            }
        }

        return 0;

    }
};