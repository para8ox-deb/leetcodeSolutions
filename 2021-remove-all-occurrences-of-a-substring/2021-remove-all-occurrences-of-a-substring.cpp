class Solution {
public:
    string removeOccurrences(string s, string part) {
        

        // Other method
        while(s.find(part) != string::npos){
            int found = s.find(part);
            if(found==string::npos) break;

            string LP = s.substr(0,found);
            string RP = s.substr(found+part.size(), s.size());

            //concatenate both parts
            s=LP+RP;
        }

        return s;




        // Simple method using STL functions
        // size_t found = s.find(part); // found has the index where the part is found in s
        // cout<<found;

        
        while(s.find(part) != string::npos){
            // means part exist in string s
            s.erase(s.find(part),part.length());
        }

        return s;
    }
};