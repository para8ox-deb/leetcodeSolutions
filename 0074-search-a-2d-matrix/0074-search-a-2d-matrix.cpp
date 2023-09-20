class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int totalEle = rows*cols;
        int s=0;
        int e=totalEle-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            int rowIndex=mid/cols;     
            int colIndex = mid%cols;
            // We calculated row and col index using these formulas as these are used to convert 1D array to 2D, so these formulas will help us find current ele or the position where mid is situated, coz we can't find mid ele using one index that's why we calculated this.

            int currentEle = matrix[rowIndex][colIndex];  // current element where mid is pointed

            if(currentEle==target){
                return true;
            }
            else if(currentEle>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

            mid=s+(e-s)/2;
        }
        return false;
    }
};