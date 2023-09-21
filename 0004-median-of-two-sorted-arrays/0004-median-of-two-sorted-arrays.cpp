class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> mergedArray;
        // for(int i=0;i<nums1.size();i++){
        //     st.insert(nums1[i]);
        // }

        // for(int i=0;i<nums2.size();i++){
        //     st.insert(nums2[i]);
        // }

        // for(auto it: st){
        //     mergedArray.push_back(it);
        // }

        for(int i=0;i<nums1.size();i++){
            mergedArray.push_back(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++){
            mergedArray.push_back(nums2[i]);
        }

        sort(mergedArray.begin(),mergedArray.end());
        double res;
        int n=mergedArray.size();
        if(n%2==0){
            res=(mergedArray[n/2]+mergedArray[(n/2)-1])/(2*1.0);
        }
        else{
            res=mergedArray[n/2];
        }

        return res;

    }
};