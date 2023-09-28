class Solution {
public:
    string decodeMessage(string key, string message) {
        // Creating the mapping
        char c='a';
        char arr[256]={0};

        for(auto ch:key){
            if(ch!=' ' && arr[ch]==0){
                arr[ch]=c;
                c++;
            }
        }

        // Decoding the msg using mapping
        string ans;

        for(auto ch:message){
            if(ch==' '){
                ans.push_back(' ');
            }
            else{

            char decodedChar = arr[ch];
            ans.push_back(decodedChar);
            }
        }

        return ans;
    }
};