class Solution {
public:
    string convertToBase7(int num) {
        // it means just divide the num and keep on adding the remainder in the answer and the keep dividing the quotient till it becomes zero

        string ans;
        if(num==0) return "0";

        // handling neg num
        int neg=0;
        if(num<0){
            neg=1;
            num=abs(num);
        }

        // Evaluating the num now 
        while(num!=0){
            int rem = num%7;
            ans+= to_string(rem);
            num/=7;
        }

        if(neg==1){
            ans.push_back('-');
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};