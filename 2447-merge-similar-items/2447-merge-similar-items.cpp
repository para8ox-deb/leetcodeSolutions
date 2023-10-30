class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        vector<vector<int>> allVec;
        // sort(items1.begin(),items1.end());
        // sort(items2.begin(),items2.end());

        // Merging all the pairs in single vector and then sorting them
        for(int i=0;i<items1.size();i++){
            allVec.push_back(items1[i]);
        }
        for(int i=0;i<items2.size();i++){
            allVec.push_back(items2[i]);
        }   
        sort(allVec.begin(),allVec.end());

        // Now merging similar items and creating the final result
        for(int i=0;i<allVec.size();i++){

            if(ans.empty()){    // when the ans is empty
                ans.push_back(allVec[i]);
            }
            else{
                vector<int> &v = ans.back();
                int firstEl = v[0];

                if(firstEl == allVec[i][0]){
                    v[1] = v[1]+allVec[i][1];
                }
                else{
                    ans.push_back(allVec[i]);
                }
            }
        }


        return ans;

    }
};