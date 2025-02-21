class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s; // Step 1: Concatenate s with itself
        return doubled.substr(1, 2 * s.size() - 2).find(s) != string::npos; // Step 2 & 3
    }
};
