class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0;
        vector<int> altitudes(gain.size()+1);
        altitudes.push_back(res);
        for(int i=0;i<gain.size();i++){
            res = res+gain[i];
            altitudes.push_back(res);
        }
        res=INT_MIN;
        for(int i=0;i<altitudes.size();i++){
            res=max(res,altitudes[i]);
        }

        return res;
        
    }
};