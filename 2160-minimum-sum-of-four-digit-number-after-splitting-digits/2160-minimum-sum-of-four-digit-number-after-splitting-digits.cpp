class Solution {
public:
    int minimumSum(int num) {
        vector<int> vals(4,0);

        for(int i=0;i<4;i++){
            vals[i] = num%10;
            num/=10;
        }

        sort(vals.begin(),vals.end());

        return (vals[0]*10 + vals[2] ) + (vals[1] *10 + vals[3]);


    }
};