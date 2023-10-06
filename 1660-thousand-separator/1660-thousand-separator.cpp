class Solution {
public:
    string thousandSeparator(int n) {
        string ans = to_string(n);

        if(ans.length()<4){
            return ans;
        }

        int count=0;
        for(int i=ans.length()-1;i>=0;i--){
            count++;

            if(count%3==0 && i!=0){
                ans.insert(i,".");
            }
        }

        return ans;
    }
};