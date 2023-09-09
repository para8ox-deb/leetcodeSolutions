class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int length = s.length();
        int i=0;
        int j=length-1;
        string res;
            while(i<j){
                if(s[j]<s[i]){
                    s[i] = s[j];
                    j--;
                    i++;
                }
                else{
                    s[j] = s[i];
                    j--;
                    i++;
                }
            }

        return s;
    }
};