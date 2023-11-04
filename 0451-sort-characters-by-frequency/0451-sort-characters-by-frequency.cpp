class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        //mapping the chars
        unordered_map<char,int> mpp;

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

        vector<pair<int,char>> mappings;

        for(auto i:mpp){
            mappings.push_back(make_pair(i.second,i.first));
        }

        sort(mappings.begin(),mappings.end());
        int n=mappings.size();

        for(int i=n-1;i>=0;i--){
            // cout<<mappings[i].first<<" "<<mappings[i].second;
            int temp=mappings[i].first;
            while(temp!=0){
                ans+=mappings[i].second;
                temp--;
            }
        }

        return ans;
    }
};