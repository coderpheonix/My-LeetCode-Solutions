class Solution {
public:
    string removeOccurrences(string s, string part)
    {
        // Keep removing occurrences of 'part' until it's no longer found
        while (s.find(part) != string::npos)
            {
            size_t pos = s.find(part); // Find the first occurrence of 'part'
            s.erase(pos, part.length()); // Remove 'part' from string 's'
        }
        return s; // Return the modified string
    }
};
