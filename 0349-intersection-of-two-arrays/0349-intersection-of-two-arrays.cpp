class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // vector<int> ans;
        set<int> mySet;

        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i] == nums2[j])
                {
                    mySet.insert(nums1[i]);
                    // ans.push_back(nums1[i]);
                    // continue;
                }
            }
        }
        vector<int> ans(mySet.begin(), mySet.end());
        return ans;
    }
};