#include <algorithm>
#include <cctype>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        // Convert uppercase letters to lowercase
        std::transform(s.begin(), s.end(), s.begin(),
                       [](unsigned char c) { return std::tolower(c); });
        
        // Remove non-alphanumeric characters
        s.erase(std::remove_if(s.begin(), s.end(),
                               [](unsigned char c) { return !std::isalnum(c); }),
                s.end());
        
        // Check if the processed string is a palindrome
        return isPalindromeCheck(s);
    }
    
private:
    bool isPalindromeCheck(const std::string& s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right])
                return false;
            ++left;
            --right;
        }
        return true;
    }
};
