class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        // Working method
        sort(nums.begin(),nums.end());

        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];      // a+b+c=0 , b+c=-a

            int t=-a;   // target should be negative of a coz we already have a now we have to find other 2 nums only
            int s=i+1,e=n-1;
            // two pointer approach on two remaining nums
            while(s<e){
                if(nums[s]+nums[e]==t){
                    // so triplet is i,s,e
                    ans.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;   // to remove repeatition
                    while(s<e && nums[e]==nums[e-1]) e--;   // to remove repeatition
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]>t){
                    e--;
                }
                else{
                    s++;
                }
            }
            while(i+1<n && nums[i+1]==nums[i]) i++; // to remove repeatition
        }

        return ans;


        // Working method but TLE Error
        /*
        sort(nums.begin(),nums.end());
        set<vector<int>> allAns;
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> pair;
                        pair.push_back(nums[i]);
                        pair.push_back(nums[j]);
                        pair.push_back(nums[k]);

                        // ans.push_back(pair);
                        allAns.insert(pair);
                        pair.clear();
                    }
                }
            }
        }

        for(auto i:allAns){
            // cout<<i<<endl;
            ans.push_back(i);
        }

        return ans;
        */
    }
};