class Solution {
public:
    int majorityElement(vector<int>& nums) {

        vector<int>v1;
        map<int,int> m;
        int ele=nums[0];
        

        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            
        }

        int large=m[nums[0]];

        for(int i=0;i<nums.size();i++)
        {
           if(large<m[nums[i]])
           {
                large=m[nums[i]];
                ele=nums[i];   
           }
            
        }



        return ele;


        
    }
};