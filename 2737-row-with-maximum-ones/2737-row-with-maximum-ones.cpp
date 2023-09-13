class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int onesCount=INT_MIN;
        int rowNo = -1;

        for(int i=0;i<mat.size();i++){
          int counter=0;
          for(int j=0;j<mat[i].size();j++){
            if(mat[i][j]==1){
              counter++;
            }
          }
          if(counter>onesCount){
            cout<<"hello"<<" "<<counter;
            onesCount = counter;
            rowNo = i;
          }
        }

        ans.push_back(rowNo);
        ans.push_back(onesCount);

        return ans;

    }
};