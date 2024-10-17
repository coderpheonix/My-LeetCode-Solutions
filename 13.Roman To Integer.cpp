class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> mp{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0, prev = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            int curr = mp[s[i]];
            ans += (curr < prev) ? -curr : curr;
            prev = curr;
        }
        return ans;
    }
};

