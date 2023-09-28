class Solution {
public:

    void createMapping(string& str){
        char c='a';
        char mapping[300]={0};

        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(mapping[ch]==0){
                mapping[ch]=c;
                c++;
            }
        }


        // updating the actual string
        for(int i=0;i<str.length();i++){
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;

        //Normalising the pattern i.e. mapping the pattern first and then updating the pattern with the mapped data
        cout<<pattern;
        createMapping(pattern);
        cout<<pattern;  // normalized pattern


        // Now normalizing all the words of the string vector
        for(string s: words){
            string tempString=s;        // to change tempString so that actual words remains same coz we have to return the strings that resembles the pattern

            // normalising tempString
            createMapping(tempString);

            if(tempString==pattern){
                ans.push_back(s);
            }
        }

        return ans;
    }
};