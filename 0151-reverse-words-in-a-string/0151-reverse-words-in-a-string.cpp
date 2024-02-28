class Solution {
public:
    string reverseWords(string s) {
        

        //two pointer 

        string res = "";
        int i=s.length()-1;

        while(i>=0){

            while(i>=0 && s[i]==' ') i--;

            int j=i;


            //leading space case
            if(i<0) break;


            while(i>=0 && s[i]!=' '){
                i--;
            }

            if(res.empty()){
                res+=s.substr(i+1,j-i);
            } else{
                res+=" ";
                res+=s.substr(i+1,j-i);
            }

        }

        return res;
    }
};