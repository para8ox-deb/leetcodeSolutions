class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        vector<vector<int>> result;
        vector<int> kEles;
        int students = score.size();
        int exams = score[0].size();

        for(int i=0;i<students;i++){

            kEles.push_back(score[i][k]);
        }

        sort(kEles.begin(),kEles.end());
        reverse(kEles.begin(),kEles.end());

        for(int i=0;i<students;i++)
            cout<<kEles[i]<<" ";

        
        // Now putting sorted data in result
        int j=0;

        for(int i=0;i<students;i++){
            int targetValue = kEles[i];
            for(int j=0;j<students;j++){
                if (score[j][k] == targetValue) {
                    result.push_back(score[j]);
                    break;  // Move to the next iteration of the outer loop
                }
            }
        }


        return result;
    }
};