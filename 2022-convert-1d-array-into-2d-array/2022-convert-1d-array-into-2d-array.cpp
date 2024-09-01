class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res;

        if(m*n != original.size())
            return res;
        //m - row
        //n - col
        int k=0;
        for(int i=0;i<m;i++){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(original[k]);
                k++;
            }

            res.push_back(row);
        }

        return res;
    }
};