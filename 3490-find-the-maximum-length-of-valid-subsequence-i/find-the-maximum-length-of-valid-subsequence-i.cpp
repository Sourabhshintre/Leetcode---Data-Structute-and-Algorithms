class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even = 0, odd = 0, alt =1;
        int prev = nums[0];
        if(prev%2==0)
        even++;
        else odd++;
        
        for(int i=1;i<nums.size();i++)
        {
            if(prev%2 != nums[i]%2)
            {
                alt++;
                prev=nums[i];
            }

            if(nums[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        return max(alt,max(even,odd));
    }
};