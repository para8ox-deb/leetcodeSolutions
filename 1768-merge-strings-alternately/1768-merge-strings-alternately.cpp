class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int len1 = word1.length();
        int len2 = word2.length();

        string res = "";

        if(len1<=len2){
            int i=0;
            while(i!=len1 && i!=len2){
                res+=word1[i];
                res+=word2[i];
                i++;
            }

            for(int j=i;j<len2;j++){
                res+=word2[j];
            }
        }
        else{
            int i=0;
            while(i!=len2 && i!=len1){
                res+=word1[i];
                res+=word2[i];
                i++;
            }

            for(int j=i;j<len1;j++){
                res+=word1[j];
            }
        }

        return res;
        

    }
};