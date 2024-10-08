class Solution {
public:

    //custom comparator
    static string str;     // using global variable to use order string outside the function
    static bool compare(char c1, char c2){

        // it will return true, if position of char1 in str string is less than the position of char2 in str string

        // when true is returned, then char1 will be placed before char2 in the output string
        
        return (str.find(c1) < str.find(c2));
    }

    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),compare);    // compare is custom comparator
        return s;
    }
};
string Solution::str;       // added by me manually to get rid of error as we have created a global variable str vo we have to handle that as well