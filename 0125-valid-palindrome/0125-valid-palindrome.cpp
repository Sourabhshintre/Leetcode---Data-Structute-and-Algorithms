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
           
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
         
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }
           
            left++;
            right--;
        }
        
     
        return true;

    }
}; 