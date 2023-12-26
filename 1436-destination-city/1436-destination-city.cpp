class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string res;

        unordered_map<string,int> mpp;

        for(int i=0;i<paths.size();i++){
            vector<string> path = paths[i];

            for(int j=0;j<1;j++){
                mpp[path[j]]++;
            }
        }

        for(int i=0;i<paths.size();i++){
            vector<string> path = paths[i];
            int flag=0;
            for(int j=1;j<2;j++){
                string word = path[j];

                for(auto it:mpp){
                    if(word==it.first){
                        flag=1;
                    }
                }

                if(flag!=1){
                    res=word;
                    break;
                }

            }
        }
        

        return res;
    }
};