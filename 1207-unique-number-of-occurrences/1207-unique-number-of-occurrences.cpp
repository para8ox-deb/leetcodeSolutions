class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> mpp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }

        vector<int> occr;

        for(auto it: mpp){
            occr.push_back(it.second);
        }

        sort(occr.begin(), occr.end());

        for(int i=0;i<occr.size();i++){
            cout<<occr[i]<<" ";
            if(i+1 < occr.size() && occr[i] == occr[i+1]){
                return false;
            }
        }

        return true;
    }
};