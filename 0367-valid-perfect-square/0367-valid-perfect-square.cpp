class Solution {
public:
    bool isPerfectSquare(int num) {
        int res;
        res = sqrt(num);

        if(res*res==num){
            return true;
        }

        return false;
    }
};