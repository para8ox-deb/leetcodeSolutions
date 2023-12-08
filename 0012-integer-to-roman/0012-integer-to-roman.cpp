class Solution {
public:
    string intToRoman(int num) {
        string romanSym[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        int corresVals[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        string res = "";

        for(int i=0;i<13;i++){
            
            while(num>=corresVals[i]){
                res+=romanSym[i];
                num = num-corresVals[i];
            }
        }

        return res;
    }
};