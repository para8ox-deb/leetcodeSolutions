class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0, ten=0;

        for(int i=0;i<bills.size();i++){

            if(bills[i]==5){
                five+=5;
            }
            else if(bills[i]==10){
                if(five<5){
                    return false;
                }

                five-=5;
                ten+=10;
            }
            else {  // bill == 20
                if (ten >= 10 && five >= 5) {
                    ten-=10;  // Give one $10 bill
                    five-=5;  // Give one $5 bill
                } else if (five >= 15) {
                    five -= 15;  // Give three $5 bills
                } else {
                    return false;  // Can't give proper change
                }
            }
        }


        return true;
    }
};