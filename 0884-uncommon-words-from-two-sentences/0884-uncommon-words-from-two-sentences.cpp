class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        vector<string> ans;

        string temp;
        stringstream ss(s1);
        vector<string> v;
        while (getline(ss, temp, ' ')) {
            v.push_back(temp);
        }
        temp="";
        stringstream ss1(s2);
        vector<string> v1;
        while (getline(ss1, temp, ' ')) {
            v1.push_back(temp);
        }


        unordered_map<string,int> mpp;

        for(auto it: v){
            mpp[it]++;
        }
        for(auto it: v1){
            mpp[it]++;
        }

        for(auto i: mpp){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};