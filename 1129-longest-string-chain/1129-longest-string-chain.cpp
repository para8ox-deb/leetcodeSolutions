class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string, int> dp; // Store the longest chain length for each word
        int maxChainLength = 0; // Store the maximum chain length found so far

        // Sort the words by their lengths in ascending order
        sort(words.begin(), words.end(), sortByLength);

        // Iterate through each word in sorted order
        for (string word : words) {
            int currentChainLength = 1; // Initialize the chain length for the current word to 1

            // Try removing each character from the current word and check if it's in the map
            for (int i = 0; i < word.length(); i++) {
                string predecessor = word.substr(0, i) + word.substr(i + 1);
                
                // Update the chain length for the current word if a longer chain is found
                currentChainLength = max(currentChainLength, dp[predecessor] + 1);
            }

            // Store the chain length for the current word in the map
            dp[word] = currentChainLength;

            // Update the maximum chain length found so far
            maxChainLength = max(maxChainLength, currentChainLength);
        }

        return maxChainLength;
    }
    
    static bool sortByLength(string& s1, string& s2) {
        return s1.length() < s2.length();
    }
};