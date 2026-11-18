class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> ida;
        unordered_map<char, char> volta;

        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < t.length(); i++) {
            if (ida[s[i]] == '\0' && volta[t[i]] == '\0') {
                ida[s[i]] = t[i];
                volta[t[i]] = s[i];
            } else if (ida[s[i]] != t[i] || volta[t[i]] != s[i]) {
                return false;
            }
        }

        return true;
    }
};
