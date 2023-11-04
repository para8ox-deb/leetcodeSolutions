class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // note -> all ranks are unique

        int n=score.size();
        vector<string> ans(n);
        string first="Gold Medal";
        string second="Silver Medal";
        string third="Bronze Medal";

        vector<int> temp = score;
        sort(temp.begin(),temp.end(),greater<int>());
        

        for(int i=0;i<n;i++){
            int sc=temp[i];
            int pos = i+1;
            for(int j=0;j<n;j++){
                if(sc==score[j]){
                    if(pos==1){
                        ans[j]=first;
                    }
                    else if(pos==2){
                        ans[j]=second;
                    }
                    else if(pos==3){
                        ans[j]=third;
                    }
                    else{
                        ans[j]=to_string(pos);
                    }
                }
            }
        }
        return ans;

    }
};