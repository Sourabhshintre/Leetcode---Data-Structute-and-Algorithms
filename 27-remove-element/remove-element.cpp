class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int>v;
        // int cnt=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==val)
        //     {
        //         free (nums[i]);
        //     }
        //     v.push_back(nums[i]);
        //     cnt+=1;
        // }
        // return cnt;
        // return v;


        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
               nums[k]=nums[i];
               k++;

            }
          
        }
        return k;
        
    }
};