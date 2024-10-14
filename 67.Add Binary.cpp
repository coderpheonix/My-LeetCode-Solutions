class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        // Process each bit from the end
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            carry = sum / 2;
            result += (sum % 2) + '0';  // Append the binary result of the current bit
        }

        // Reverse the result to get the correct binary order
        reverse(result.begin(), result.end());

        return result;
    }
};

