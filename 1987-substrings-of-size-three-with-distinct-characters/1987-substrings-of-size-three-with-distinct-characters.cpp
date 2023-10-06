class Solution {
public:
    int countGoodSubstrings(string s) {
        


        // Normal method - O(n)
        int count=0;
        int l = s.length();
        for(int i=0;i<l-2;i++){
            string sub;
            sub.push_back(s[i]);
            sub.push_back(s[i+1]);
            sub.push_back(s[i+2]);

            int flag=0;
            if(sub[0]!=sub[1] && sub[1]!=sub[2] && sub[0]!=sub[2]){
                count++;
            }

        }

        return count;
    }
};