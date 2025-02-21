
// optimized time and space complexities


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())return false;
        vector<int> count(26,0);
        for (auto i : s) count [i-'a']++;
        for (auto j : t)
        {
            count [j-'a']--;
            if (count [j-'a']<0) return false;
        }
       return true;

    }
};

// Time complexities are O (n log n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
