class Solution {
public:
    string freqAlphabets(string s) {
        // a = 1, b=2, c=3, d=4, ...i=9
        // j to z = 10# to 26# respectively

        int j=s.length()-1;
        string res;

        while(j>=0){
            int val = s[j]-'0';
            if(val>0 && val<10){
                res.push_back('a'+(val-1));
                j--;
            }
            else{
                string sub = s.substr(j - 2, 2);
                int num = stoi(sub);
                res.push_back('a' + (num - 1));
                j -= 3;
            }
        }

        reverse(res.begin(),res.end());
        return res;

    }
};