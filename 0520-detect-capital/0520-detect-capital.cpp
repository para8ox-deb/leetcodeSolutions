class Solution {
public:
    bool detectCapitalUse(string word) {
        // 65 - A to 91 - Z
        // 97 - a to 123 - z (lowercase)

        int cntUpper=0;
        int cntLower=0;
        int n = word.length();

        // handling case when first char is capital
        char First=word[0];
        bool val=false;
        if(First>=65 && First<=91){
            val=true;
        }


        for(int i=0;i<word.length();i++){
            if(word[i]>=65 && word[i]<=91){
                cntUpper++;
            }
            else{
                cntLower++;
            }
        }

        if(cntUpper==n || cntLower==n){
            return true;
        }

        if(val==true && cntLower==n-1){
            return true;
        }

        return false;

    }
};