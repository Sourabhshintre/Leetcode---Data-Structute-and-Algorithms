class Solution {
public:
    bool isPalindrome(string s) {
        
    //     string ans;

    //     for (char c : s) {
    //     if (isalnum(c)) {  
    //         ans += tolower(c); 
    //     }
    // }
    //     string temp=ans;
    //     reverse(ans.begin(),ans.end());

    //    return ans==temp;

        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Move the left pointer forward if the current character is not alphanumeric
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
            // Move the right pointer backward if the current character is not alphanumeric
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            // Compare the characters after converting them to lowercase
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }
            // Move both pointers towards the center
            left++;
            right--;
        }
        
        // If all characters matched, it's a palindrome
        return true;

    }
}; 