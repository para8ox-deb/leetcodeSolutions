class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        // anagrams is like using all same char and forming a different word 

        //method - sorting and then storing in map TC - O(m*nlogn) , m is length of string 

        unordered_map<string,vector<string>> mpp;

        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mpp[strs[i]].push_back(temp);
        }

        for(auto x:mpp){
            ans.push_back(x.second);
        }

        return ans;

    }
};