class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        string str;

        for(auto word: words){
            for(auto ch: word){
                str.push_back(ch);
            }
            if(str==s){
                return true;
            }
        }

        return false;
    }
};