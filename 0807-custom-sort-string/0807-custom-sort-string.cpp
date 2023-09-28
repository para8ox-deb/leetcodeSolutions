class Solution {
public:

    //custom comparator
    static string str;     // using global variable to use order string outside the function

    static bool compare(char c1, char c2){

        return (str.find(c1) < str.find(c2));
    }

    string customSortString(string order, string s) {
        str=order;


        sort(s.begin(),s.end(),compare);    // compare is custom comparator
        return s;
    }
};
string Solution::str;       // added by me manually to get rid of error as we have created a global variable str vo we have to handle that as well