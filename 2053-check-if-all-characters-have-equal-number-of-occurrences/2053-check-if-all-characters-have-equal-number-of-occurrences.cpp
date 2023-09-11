class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mpp;      // map always take key value pair

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

        int val = mpp.begin()->second;

        for(auto it: mpp){
            if(val!=it.second)
                return false;
        }

        return true;
    }
};