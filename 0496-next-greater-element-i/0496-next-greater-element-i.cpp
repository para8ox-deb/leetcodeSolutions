class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1= nums1.size();
        int n2= nums2.size();

        for(int i=0;i<n1;i++){
            int val = nums1[i];
            int fnd = 0;
            for(int j=0;j<n2;j++){
                if(val==nums2[j]){
                    int k=j+1;
                    for(k;k<n2;k++){
                        if(val<nums2[k]){
                            ans.push_back(nums2[k]);
                            fnd=1;
                            break;
                        }
                    }
                }
            }
            if(fnd==0){
                ans.push_back(-1);
            }

        }

        return ans;
    }
};