class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return -1; 
    if (n == 1) return nums[0];

    int count = 0, candidate = nums[0];
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else {
            if (candidate == num) {
                count++;
            } else {
                count--;
            }
        }
    }

    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    }

    return -1;

    }
};