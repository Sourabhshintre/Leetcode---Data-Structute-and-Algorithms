class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        int countDec = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > nums[(i + 1) % n])
            {
                countDec++;
            }
        }

        return countDec <= 1;
    }
};