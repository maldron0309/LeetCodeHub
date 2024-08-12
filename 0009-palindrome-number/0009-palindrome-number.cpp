
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0) return false;
        
        std::string palindrome = std::to_string(x);
        std::string reversePalindrome = palindrome;

        std::reverse(reversePalindrome.begin(), reversePalindrome.end());

        return palindrome == reversePalindrome;
    }
};
