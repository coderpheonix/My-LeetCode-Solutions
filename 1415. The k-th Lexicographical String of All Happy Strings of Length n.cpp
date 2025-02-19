class Solution {
public:
    string getHappyString(int n, int k)
{
        string result;
        int count = 0;
        string chars = "abc";

        function<bool(string)> backtrack = [&](string curr) {
            if (curr.length() == n)
{
                count++;
                if (count == k)
{
                    result = curr;
                    return true; // Stop recursion once we find the k-th string
                }
                return false;
            }

            for (char ch : chars) {
            if (curr.empty() || curr.back() != ch)
{ // Ensure no consecutive characters are the same
                    if (backtrack(curr + ch)) return true;
                }
            }
            return false;
        };

        backtrack("");
        return result;
    }
};



