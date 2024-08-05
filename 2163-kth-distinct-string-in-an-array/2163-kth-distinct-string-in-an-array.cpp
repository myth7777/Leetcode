class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> frequency;
        vector<string> distinctStrings;

        // Count the frequency of each string
        for (auto s : arr) {
            frequency[s]++;
        }

        // Collect strings that appear exactly once
        for (auto s : arr) {
            if (frequency[s] == 1) {
                distinctStrings.push_back(s);
            }
        }

        // Check if there are at least k distinct strings
        if (distinctStrings.size() < k) {
            return "";
        }

        return distinctStrings[k - 1];
    }
};