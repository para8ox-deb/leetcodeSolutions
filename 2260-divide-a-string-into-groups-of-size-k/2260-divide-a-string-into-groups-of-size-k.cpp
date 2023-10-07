class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;

        int size = s.length();
        int xReq = size%k;

        for(int i=0;i<size-xReq;i+=k){
            string sub = s.substr(i,k);
            ans.push_back(sub);
        }

        if(xReq!=0){
            int toStart = size - xReq;
            string last;
            for(int i=toStart;i<size;i++){
                last.push_back(s[i]);
            }

            // adding x in last substring
            int lSize = last.length();
            for(int i=lSize;i<k;i++){
                last.push_back(fill);
            }

            // cout<<last;
            // appending the last substring to ans
            ans.push_back(last);
        }

        return ans;
    }
};