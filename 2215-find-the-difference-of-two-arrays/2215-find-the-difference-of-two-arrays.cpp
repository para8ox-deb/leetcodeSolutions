class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> val;
        set<int> val1;

        for(int i=0;i<n1;i++){
            
            int curr = nums1[i];
            int flag=0;
            for(int j=0;j<n2;j++){
                if(curr==nums2[j]){
                    flag=1;
                }
            }
            if(flag==0){
                val.insert(curr);
            }
        }
        vector<int> data(val.begin(),val.end());
        ans.push_back(data);

        for(int i=0;i<n2;i++){
            
            int curr = nums2[i];
            int flag=0;
            for(int j=0;j<n1;j++){
                if(curr==nums1[j]){
                    flag=1;
                }
            }
            if(flag==0){
                val1.insert(curr);
            }
        }
        vector<int> data1(val1.begin(),val1.end());
        ans.push_back(data1);

        return ans;
    }
};