class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // brute force method - O(n2)
        // better - sliding window - O(n)

        int max=0;

        int n = s.length();
        set<char> charSet;
        int start=0;
        int end = 0;

        while(start<n){
            auto it = charSet.find(s[start]);   // checking if set has s[start]  'a'

            if(it == charSet.end()){    // means element is not found in set
                if(start-end+1 > max){
                    max = start-end+1;
                }
                charSet.insert(s[start]);
                start++;
            }
            else{       // means element is found in set
                charSet.erase(s[end]);
                end++;
            }
        }
        return max;
        
    }
};