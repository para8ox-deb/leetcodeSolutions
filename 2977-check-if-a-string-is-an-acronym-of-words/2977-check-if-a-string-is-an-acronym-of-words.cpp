class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        bool result=false;

        string newStr;

        for(auto word : words){
            for(auto c: word){
                newStr.push_back(c);
                break;
            }
        }

        if(s==newStr){
            result = true;
        }

        return result;
    }
};