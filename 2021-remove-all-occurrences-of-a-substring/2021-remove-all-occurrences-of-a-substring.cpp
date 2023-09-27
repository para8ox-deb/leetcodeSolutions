class Solution {
public:
    string removeOccurrences(string s, string part) {
        


        // Simple method using STL functions
        // size_t found = s.find(part);
        while(s.find(part) != string::npos){
            // means part exist in string s
            s.erase(s.find(part),part.length());
        }

        return s;
    }
};