class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        // XOR means exclusive OR i.e. if both bits are same then 0 otherwise 1

        vector<int> ans;
        ans.push_back(first);
        int val=first;
        for(int i=0;i<encoded.size();i++){
            val = val^encoded[i];
            ans.push_back(val);
        }

        return ans;
    }
};