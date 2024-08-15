// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid)) {
                right = mid; // Narrow down to the left half
            } else {
                left = mid + 1; // Narrow down to the right half
            }
        }
        
        // At the end of the loop, left == right, and it will be the first bad version
        return left;
    }
};