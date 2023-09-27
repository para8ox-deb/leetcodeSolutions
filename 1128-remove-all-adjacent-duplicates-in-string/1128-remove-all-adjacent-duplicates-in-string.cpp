class Solution {
public:
    string removeDuplicates(string s) {
        

        // Method - Using new string
        string ans="";

        for(int i=0;i<s.length();i++){
            if(ans.empty()){
                ans.push_back(s[i]);
            }
            // else if(ans.back()==s[i]){
            else if(ans[ans.length()-1]==s[i]){
                // cout<<ans[i-1]<<endl;
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};