class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if (m == 0) return 0;

        vector<int> lps(m, 0);
        int j = 0;

        for (int i = 1; i < m; ) {
            if (needle[i] == needle[j]) {
                j++;
                lps[i] = j;
                i++;
            } else if (j > 0) {
                j = lps[j - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }

        int i = 0;
        j = 0;

        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;

                if (j == m) {
                    return i - m;
                }
            } else if (j > 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }

        return -1;
    }
};
