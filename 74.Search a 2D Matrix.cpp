class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();  // number of rows
        if (m == 0 || matrix[0].size() == 0) return false;

        int n = matrix[0].size();  // number of columns

        // Binary search initialization
        int low = 0;
        int high = m * n - 1;  // treat the 2D matrix as a flattened 1D array

        while (low <= high) {
            int mid = low + (high - low) / 2;


            int row = mid / n;
            int col = mid % n;


            int midElement = matrix[row][col];

            // Compare midElement with target
            if (midElement == target) {
                return true;  // target found
            } else if (midElement < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};

