class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0, max_len = 0;
        unordered_set<char> char_set;
        while (j < n) {
            if (!char_set.count(s[j])) {
                char_set.insert(s[j++]);
                max_len = max(max_len, j - i);
            } else char_set.erase(s[i++]);
        }
        return max_len;
    }
};