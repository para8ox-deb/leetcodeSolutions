class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // Solution 

        vector<vector<int>> ans;
        if(numRows==0){
            return ans;
        }
        int n=numRows;

        for(int i=1;i<=n;i++){
            vector<int> row;

            for(int j=0;j<i;j++){
                if(j==0 || j==i-1){
                    row.push_back(1);
                }
                else{
                    row.push_back(ans[i-2][j] + ans[i-2][j-1]);
                }
            }
            ans.push_back(row);
        }

        return ans;
    }
};