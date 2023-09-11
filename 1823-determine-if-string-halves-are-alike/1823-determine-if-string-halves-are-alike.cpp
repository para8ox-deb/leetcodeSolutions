class Solution {
public:
    bool halvesAreAlike(string s) {
        int size = s.length();
        int half = size/2;
        int counter1=0;
        int counter2=0;
        for(int i=0;i<half;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' 
            || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                counter1++;
            }
        }

        for(int i=half;i<size;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' 
            || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                counter2++;
            }
        }

        if(counter1==counter2)
            return true;

        return false;
    }
};