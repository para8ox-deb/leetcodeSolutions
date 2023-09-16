class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int rows=matrix.size();
        int cols = matrix[0].size();

        int count=0;
        int totalCount = rows*cols;
        
        // declaring variables that will help in handling printing the spiral order
        int startRow = 0;
        int endCol = cols-1;
        int endRow = rows-1;
        int startCol = 0;

        while(count<totalCount){        // till printed ele are equal to total elements

            // Printing starting row i.e. 1,2,3 part
            for(int i=startRow; i<=endCol && count<totalCount;i++){
                result.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++; // coz now our starting row will change to 1 coz we've already cover this first row


            // Printing ending or last Col i.e. 6,9 (3 is already done so we will leave it as startRow is increase by one so startRow here is 1)
            for(int i=startRow; i<= endRow  && count<totalCount; i++){
                result.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;   // Dereased coz we've already done with last col now


            // Printing last row i.e. 8,7
            for(int i=endCol; i>=startCol  && count<totalCount; i--){
                result.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;   // Decreased coz we've already done with last Row now


            // Printing start Col i.e. 4
            for(int i=endRow; i>=startRow  && count<totalCount; i--){
                result.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;


        }

        cout<<count;
        return result;
    }
};