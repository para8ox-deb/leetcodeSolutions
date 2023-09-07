class Solution {
public:

    char shift(char a, int b){
        char n = int(a)+b;
        return n;
    }

    string replaceDigits(string s) {
        
        string res;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                s[i] = shift(s[i-1],s[i]-'0');
            }
        }

        return s;
    }
};