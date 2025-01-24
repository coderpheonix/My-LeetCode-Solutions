
class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.length() - 1;
        char ch;

        // Loop to shrink the string from both ends
        while (left < right && s[left] == s[right]) {
            ch = s[left]; // Current character to be removed

            // Move `left` pointer forward as long as characters match `ch`
            while (left <= right && s[left] == ch)
                left++;

            // Move `right` pointer backward as long as characters match `ch`
            while (left <= right && s[right] == ch)
                right--;
        }

        // Calculate the remaining length
        return right - left + 1;
    }
};
