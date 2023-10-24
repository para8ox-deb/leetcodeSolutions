class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        vector<int> temp = arr;

        // Sort the temporary array to determine ranks
        sort(temp.begin(), temp.end());

        // Create a mapping of values to their ranks
        map<int, int> rankMap;
        int rank = 1;
        for (int i = 0; i < n; i++) {
            if (i == 0 || temp[i] != temp[i - 1]) {
                rankMap[temp[i]] = rank;
                rank++;
            }
        }

        // Assign ranks to the elements in the result vector
        for (int i = 0; i < n; i++) {
            res[i] = rankMap[arr[i]];
        }

        return res;

    }
};