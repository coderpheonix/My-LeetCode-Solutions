class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;  // Stack to store non-digit characters

        for (auto i : s)
        {
            if (isdigit(i))
            { // If the character is a digit
                if (!st.empty())
                {
                    st.pop();  // Remove the closest left non-digit
                }
            }
            else
            {
                st.push(i);  // Store non-digit characters
            }
        }

        // Reconstruct the final string from the stack
        string result = "";
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }

        return result;
    }
};
