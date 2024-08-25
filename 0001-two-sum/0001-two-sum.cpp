class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;

        for(int i=0;i<nums.size();i++)
        {
            int num = nums[i];
            int need = target-num;
            if(map.find(need) != map.end())
            {
                return {map[need], i}; // Return indices
            }
            map[nums[i]] = i;
        }
         return {-1, -1};
    }
};