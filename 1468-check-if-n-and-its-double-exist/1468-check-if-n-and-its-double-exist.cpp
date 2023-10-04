class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++){

            int val = arr[i];
            for(int j=i+1;j<arr.size();j++){
                if(val==arr[j]*2 || val*2==arr[j]){
                    return true;
                }
            }
        }

        return false;
    }
};