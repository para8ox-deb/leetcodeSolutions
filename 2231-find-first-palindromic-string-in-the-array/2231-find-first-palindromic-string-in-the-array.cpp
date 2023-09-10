class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(int i=0;i<words.size();i++){
            bool flag=true;
            int k=words[i].length()-1;
            for(int j=0;j<words[i].length();j++){
                if(words[i][j]!=words[i][k]){
                    flag=false;
                    break;
                }
                k--;

            }
            if(flag){
                return words[i];
            }
        }

        return "";
    }
};