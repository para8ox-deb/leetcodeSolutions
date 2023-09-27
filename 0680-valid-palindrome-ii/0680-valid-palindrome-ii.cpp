class Solution {
public:

    bool checkPalindrome(string s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }

        return true;
    }

    bool validPalindrome(string s) {
        


        // Method - 1

        int i=0;
        int j=s.length()-1;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                // means s[i] is not equal to s[j] so we can change or remove one char now

                // ith char remove
                bool res1 = checkPalindrome(s,i+1,j);       //i+1 means we are leaving ith ele and checking if we leave it and then the remaiing string is palindrome or not
                bool res2= checkPalindrome(s,i,j-1);    // here we are leaving jth ele and checking 

                return res1||res2;
            }
        }

        return true;
    }
};