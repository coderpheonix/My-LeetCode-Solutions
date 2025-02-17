class Solution {
public:
    int numTilePossibilities(string tiles) {
        vector<int> freq(26, 0);
        for (char c : tiles) {
            freq[c - 'A']++;
        }
        return backtrack(freq);
    }

private:
    int backtrack(vector<int>& freq) {
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                // Choose this character
                freq[i]--;
                count += 1 + backtrack(freq);
                // Backtrack to restore the state
                freq[i]++;
            }
        }
        return count;
    }
};
