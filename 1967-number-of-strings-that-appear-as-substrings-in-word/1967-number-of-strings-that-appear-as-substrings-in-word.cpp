// #include<bits/stdc++.h>

// class Solution {
// public:
//     int numOfStrings(vector<string>& patterns, string word) {
//         int count= 0;
        
//         for(int i=0;i<patterns.size();i++){
//             bool flag=1;
//             for(char c: patterns[i]){
//                 if(word.find(c)==string::npos){
//                     flag=0;
//                     break;
//                 }
//             }
//             if(flag==1)
//                 count++;
//                 patterns[i]="";
//             }
            
               
//         return count;
//     }
// };



#include <bits/stdc++.h>

class Solution {
public:
    int numOfStrings(std::vector<std::string>& patterns, std::string word) {
        int count = 0;
        
        for (int i = 0; i < patterns.size(); i++) {
            if (word.find(patterns[i]) != std::string::npos) {
                count++;
            }
        }
               
        return count;
    }
};
