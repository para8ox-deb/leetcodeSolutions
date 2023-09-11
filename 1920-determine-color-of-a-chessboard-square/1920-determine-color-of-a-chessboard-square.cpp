class Solution {
public:
    bool squareIsWhite(string coordinates) {
        // 1,3,5,7 - black and a,c,e,g - black
        // 2,4,6,8 - black and b,d,f,h - black

        if((coordinates[0])%2!=0){
            if(coordinates[1]%2!=0){
                return false;
            }
            else{
                return true;
            }
        }
        else{
            if(coordinates[1]%2==0){
                return false;
            }
            else{
                return true;
            }
        }

        return false;
    }
};