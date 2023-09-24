class Solution {
public:
    string freqAlphabets(string s) {
        // a = 1, b=2, c=3, d=4, ...i=9
        // j to z = 10# to 26# respectively

        int j=s.length()-1;     // j will get the last index of string
        string res;

        while(j>=0){
            int val = s[j]-'0';     // it will convert the char digit to int digit
            if(val>0 && val<10){
                res.push_back('a'+(val-1));
                j--;
            }
            else{
                string sub = s.substr(j - 2, 2);    // extracting substring 2-2 krke
                int num = stoi(sub);        // converting string num to integer
                res.push_back('a' + (num - 1));     // pushing the character in res
                j -= 3;         // Taking j to next part where either # or some digit will appear
            }
        }

        reverse(res.begin(),res.end());     // reversing the string
        return res;

    }
};