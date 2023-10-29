class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

        sort(intervals.begin(),intervals.end());


        for(int i=0;i<intervals.size();i++){

            if(ans.size()==0){
                ans.push_back(intervals[i]);
            }
            else{
                vector<int> &v = ans.back();
                int secVal = v[1];  // end of previous interval or second value of interval

                if(secVal>=intervals[i][0]){ // if last interval is greater than the current's first
                    v[1] = max(secVal,intervals[i][1]);
                }
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};