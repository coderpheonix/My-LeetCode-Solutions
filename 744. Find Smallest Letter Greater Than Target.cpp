class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (char ch : letters) {
            if (ch > target) {
                return ch; // Return the first character greater than target
            }
        }
        return letters[0]; // Wrap around case
    }
};




class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (letters[mid] > target) {
                right = mid - 1; // Move left if mid is greater than target
            } else {
                left = mid + 1; // Move right if mid is less than or equal to target
            }
        }

        // If left goes out of bounds, wrap around to the first element
        return letters[left % letters.size()];
    }
};
