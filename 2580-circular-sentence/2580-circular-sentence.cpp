class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        char start = sentence[0];
        int n = sentence.length();
        for(int i=0;i<n;i++){

            char lastChar;

            if(sentence[i]==' '){
                lastChar=sentence[i-1];

                if(lastChar!=sentence[i+1]){
                    return false;
                }

            }

        }

        if(sentence[n-1]!=start){
            return false;
        }

        return true;
    }
};