class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool foundWord = false;

        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] != ' ') {
                length++;
                foundWord = true;
            } else if (foundWord) {
                break;
            }
        }

        return length;
    }
};

