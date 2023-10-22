class Solution {
public:

    bool bs(vector<int> num, int t){
        int s=0;
        int e=num.size()-1;
        int mid;
        while(s<=e){
            mid = s+(e-s)/2;

            if(num[mid]==t){
                return true;
            }
            else if(num[mid]>t){
                // go left
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return false;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> inter;
        vector<int> res;
        sort(nums2.begin(),nums2.end());

        for(int i=0;i<nums1.size();i++){
            int val = nums1[i];

            bool check=bs(nums2,val);

            if(check==true){
                inter.insert(val);
            }
        }

        for(auto i:inter){
            res.push_back(i);
        }

        return res;
    }
};