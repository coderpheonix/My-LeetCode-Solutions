class Solution {
public:
    // Function to check if a character is a vowel (case-insensitive)
    bool isVowel(char & ch)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return true; // Character is a vowel
        }
        else
        {
            return false; // Character is not a vowel
        }
    }

    // Function to reverse the vowels in a string
    string reverseVowels(string s){
        int right = s.size() - 1; // Pointer starting from the end
        int left = 0;            // Pointer starting from the beginning

        // Loop until the pointers meet or cross
        while (left < right)
        {
            // Move the left pointer to the next vowel
            while (left < right && !isVowel(s[left]))
            {
                left++;
            }

            // Move the right pointer to the previous vowel
            while (left < right && !isVowel(s[right]))
            {
                right--;
            }

            // Swap the vowels
            if (left < right) {
                swap(s[left], s[right]); // Swap the vowels
                left++;                  // Move the left pointer inward
                right--;                 // Move the right pointer inward
            }
        }

        return s;
    }
};
