class Solution {
public:
    bool checkString(string s) {
        int aLoc;

        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='a'){
                aLoc=i;
                break;
            }
        }

        if(aLoc==0){
            return true;
        }

        for(int i=0;i<aLoc;i++){
            if(s[i]=='b'){
                return false;
            }
        }

        return true;
    }
};