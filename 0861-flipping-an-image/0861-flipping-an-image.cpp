class Solution {
public:

    void vectorPrinter(vector<vector<int>> & vec){
        int rows = vec.size();
        int cols = vec[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<vec[i][j]<<" ";

            }
            cout<<endl;
        }
    }

    void flipper(vector<vector<int>>& vec){
        int rows = vec.size();
        int cols = vec[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(vec[i][j]==0){
                    vec[i][j]=1;
                }
                else{
                    vec[i][j]=0;
                }

            }
            
        }
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> result=image;
        // vectorPrinter(image);

        for(int i=0;i<result.size();i++){
            reverse(result[i].begin(),result[i].end());
        }
        flipper(result);
        // vectorPrinter(result);
        return result;
    }
};