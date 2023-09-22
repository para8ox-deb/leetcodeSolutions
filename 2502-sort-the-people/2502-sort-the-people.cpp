class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        vector<pair<int, string>> people(n);

        // Create a vector of pairs (height, name) for sorting
        for (int i = 0; i < n; i++) {
            people[i] = {heights[i], names[i]};
        }

        // Sort the people vector in descending order of height
        sort(people.rbegin(), people.rend());

        vector<string> result(n);

        // Extract sorted names from the sorted people vector
        for (int i = 0; i < n; i++) {
            result[i] = people[i].second;
        }

        return result;
    }
};
