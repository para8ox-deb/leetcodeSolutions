class Solution {
public:

    int gcd(int n1, int n2){
        if(n2==0) return n1;

        return gcd(n2,n1%n2);
    }

    string gcdOfStrings(string str1, string str2) {
        
        int len1 = str1.length();
        int len2 = str2.length();

        int val = gcd(len1,len2);
        // cout<<val;

        string res="";

        for(int i=0;i<val;i++){
            res+=str1[i];
        }

        // cout<<res;
        for(int i=0;i<len1;i+=val){
            if(res!=str1.substr(i,val)) return "";
        }
        for(int i=0;i<len2;i+=val){
            if(res!=str2.substr(i,val)) return "";
        }
                    
        return res;

    }
};