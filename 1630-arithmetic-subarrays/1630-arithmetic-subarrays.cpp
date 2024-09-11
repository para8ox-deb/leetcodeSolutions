class Solution {
public:

    bool arithChecker(vector<int> arr, int j, int k){

        vector<int> demo;

        for(int i=j;i<=k;i++){
            demo.push_back(arr[i]);
        }

        sort(demo.begin(),demo.end());
        int diff = demo[1]-demo[0];

        for(int i=0;i<demo.size();i++){
            if( i < demo.size() - 1 && demo[i+1] != demo.size()-1 && demo[i+1] - demo[i] != diff ){
                return false;
            }

        }
        return true;

    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> res;

        int n = l.size();

        for(int i=0;i<n;i++){

            int j = l[i];
            int k = r[i];

            bool val = arithChecker(nums, j, k);
            res.push_back(val);

        }
        return res;

    }
};