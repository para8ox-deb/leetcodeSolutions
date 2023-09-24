class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;

        for(int i=0;i<n+1;i++){
            int temp=i;
            int count=0;
            while(temp){
                if(temp%2==1){
                    count++;
                }
                temp/=2;
            }

            res.push_back(count);
        }

        return res;
    }
};