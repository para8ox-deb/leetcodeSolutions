class Solution {
public:
    int scoreOfString(string s) {
        
        int sum=0;
        int diff;
        for(int i=0;i<s.length()-1;i++){
            diff = abs(int(s[i])-int(s[i+1]));
            cout<<diff<<" ";
            sum+=diff;
        }

        return sum;
    }
};