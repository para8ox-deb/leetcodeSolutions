class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;

        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";
        int n=words.size();

        for(int i=0;i<n;i++){
            string word = words[i];
            int len=words[i].length();
            int cnt1=0;
            int cnt2=0;
            int cnt3=0;

            for(int j=0;j<word.length();j++){
                char c = word[j];
                if(c>=65 && c<=91){
                    c=c+32;
                }

                //checking in first row1
                for(int k=0;k<row1.size();k++){
                    if(c==row1[k]){
                        cnt1++;
                        break;
                    }
                }

                //checking in sec row
                for(int k=0;k<row2.size();k++){
                    if(c==row2[k]){
                        cnt2++;
                        break;
                    }
                }

                //checking in third row
                for(int k=0;k<row3.size();k++){
                    if(c==row3[k]){
                        cnt3++;
                        break;
                    }
                }
            }

            if(cnt1==len){
                ans.push_back(word);
            }
            else if(cnt2==len){
                ans.push_back(word);
            }
            else if(cnt3==len){
                ans.push_back(word);
            }
        }

        return ans;
    }
};