class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string word;

        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                word.push_back(s[i]);
            }
            else{
                reverse(word.begin(),word.end());
                for(auto ch:word){
                    ans.push_back(ch);
                }
                ans.push_back(' ');
                word="";
            }
        }

        // putting last word
        reverse(word.begin(),word.end());
        for(auto ch:word){
            ans.push_back(ch);
        }
        

        return ans;
    }
};