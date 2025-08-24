class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeroCount = 0, maxLen = 0;

        for(int right=0; right < nums.size(); right++)
        {
            if(nums[right] == 0)
            {
                zeroCount++;
            }

            // Maintain at most one zero in the window
            while(zeroCount > 1)
            {
                if(nums[left] == 0) zeroCount--;
                left++;
            }

            // Length of window - 1 (because one element must be deleted)

            maxLen = max(maxLen, right-left);
        }
        return maxLen;
    }
};