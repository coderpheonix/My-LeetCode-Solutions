class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) {
            if (n % 3 == 2) return false;  // If remainder is 2, it can't be expressed as sum of distinct powers of 3
            n /= 3;  // Reduce n by dividing by 3
        }
        return true;  // If no remainder was 2, then it's a valid representation
    }
};
