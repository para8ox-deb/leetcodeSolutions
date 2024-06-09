class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> mpp;
        
        for(auto i: s){
            mpp[i]++;
        }
        
        int ans=0, flag=0;
        
        for(auto i: mpp){
            if(i.second%2==0){
                ans+=i.second;
            }
            else{
                ans+=(i.second-1);
                flag=1;
            }
        }
        if (flag==1)
            return ans+1;
        
        return ans;
    }
};