class Solution {
public:

    void reverseVec(vector<int>& v){
        int n=v.size();
        int start=0;
        int end=n-1;

        while(start<end){
            swap(v[start],v[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        

        // Transpose
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[i].size();j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }


        // Reversing each row

        for(int i=0;i<matrix.size();i++){
            // reverse(matrix[i].begin(),matrix[i].end());

            reverseVec(matrix[i]);
        }

    }
};