class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int size1=word1.length();
        int size2=word2.length();
        int i;
        if(size1<=size2){
            for(i=0;i<size1;i++){
                result.push_back(word1[i]);
                result.push_back(word2[i]);
            }

            for(int j=i;j<size2;j++){
                result.push_back(word2[j]);
            }
        }
        else{
            for(i=0;i<size2;i++){
                result.push_back(word1[i]);
                result.push_back(word2[i]);
            }

            for(int j=i;j<size1;j++){
                result.push_back(word1[j]);
            }

        }

        return result;
    }
};