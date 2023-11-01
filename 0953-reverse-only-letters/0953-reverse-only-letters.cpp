class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        // two pointer approach

        int i=0;
        int j=s.length()-1;

        while(i<=j){
            if((s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') && (s[j]>='a' && s[j]<='z' || s[j]>='A' && s[j]<='Z')){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else if(! isalpha(s[j])){
                j--;
            }
        }

        return s;
    }
};