

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers cannot be palindrome
        if (x < 0) return false;

        // If the number ends with 0, it should also start with 0 to be a palindrome
        if (x != 0 && x % 10 == 0) return false;

        int reversed = 0;
        while (x > reversed)
        {
            reversed = reversed * 10 + x % 10;  // Add the last digit of x to reversed
            x /= 10;  // Remove the last digit from x
        }

        // For even-length numbers, x == reversed. For odd-length, reversed / 10 == x.
        return x == reversed || x == reversed / 10;
    }
};
