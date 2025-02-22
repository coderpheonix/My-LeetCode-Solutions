// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;

        while (left < right)
        { // Stop when left == right
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid))
            {
                right = mid; // First bad version is at mid or before
            }
            else
            {
                left = mid + 1; // Search in the right half
            }
        }

        return left; // Left now points to the first bad version
    }
};
