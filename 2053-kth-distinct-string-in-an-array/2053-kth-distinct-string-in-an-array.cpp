class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mpp;

        for(auto i: arr){
            mpp[i]++;
        }

        int n=1;
        for(auto i: arr){
            
            if(mpp[i] == 1){
                if(n==k){
                    return i;
                }
                n++;
            }
        }

        return "";
    }
};