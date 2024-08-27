

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;

        int originalNum = x;
        int reversedNum = 0;

        while (x != 0) {
            int lastDigit = x % 10;

            // Check if multiplying reversedNum by 10 will cause overflow
            if (reversedNum > (INT_MAX - lastDigit) / 10) {
                return false; // This handles overflow, not a valid palindrome
            }

            reversedNum = reversedNum * 10 + lastDigit;
            x /= 10;
        }

        // Check if the original number is equal to the reversed number
        return originalNum == reversedNum;
    }
};
