class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans=0;

        unordered_map<string, int> mpp1;
        unordered_map<string, int> mpp2;

        for(int i=0;i<words1.size();i++){
            mpp1[words1[i]]++;
        }

        for(int i=0;i<words2.size();i++){
            mpp2[words2[i]]++;
        }

        
        // now checking for occurences
        for(auto it: mpp1){
            string val = it.first;

            for(auto it1: mpp2){

                if(val==it1.first){
                    if(it.second == 1 && it1.second==1){
                        ans++;
                    }
                }
            }
        }

        return ans;

    }
};