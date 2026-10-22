class Solution {
private:
    // Checks whether all characters
    // in the selected range are distinct.
    bool hasUniqueCharacters(const string& s, int start, int end) {
        unordered_set<char> seen;

        // Scan the selected substring.
        for (int i = start; i <= end; i++) {

            // A repeated character
            // makes the substring invalid.
            if (seen.count(s[i])) {
                return false;
            }

            seen.insert(s[i]);
        }

        return true;
    }

public:
    // Returns the longest substring length
    // without repeating characters.
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;

        // Try every possible start.
        for (int start = 0; start < n; start++) {

            // Extend the substring
            // from the current start.
            for (int end = start; end < n; end++) {

                // A longer range will still
                // contain the same duplicate.
                if (!hasUniqueCharacters(s, start, end)) {
                    break;
                }

                maxLen = max(maxLen, end - start + 1);
            }
        }

        return maxLen;
    }
};
