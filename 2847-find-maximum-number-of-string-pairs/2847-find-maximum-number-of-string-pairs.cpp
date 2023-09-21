class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int res=0;

        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                string reversed = words[j];
                reverse(reversed.begin(), reversed.end());
                if (words[i] == reversed) {
                    res++;
                    break;
                }
            }
        }

        return res;
    }
};