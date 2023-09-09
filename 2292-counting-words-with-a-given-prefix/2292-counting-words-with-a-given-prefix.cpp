class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        int size = pref.length();
        
        for(int i=0;i<words.size();i++){
            bool flag=true;
            for(int j=0;j<size;j++){
                if(words[i][j]!=pref[j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                res++;
            }

        }

        return res;
    }
};