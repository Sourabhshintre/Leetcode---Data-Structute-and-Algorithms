class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int curr_count = 0;
        int max_count = 0;

        for(int num:nums)
        {
            if(num == 1)
            {
                curr_count++;
            }
            else
            {
                max_count = max(curr_count,max_count);
                curr_count = 0;
            }
        }
        max_count = max(curr_count,max_count);
        return max_count;

    }
};