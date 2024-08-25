#include <algorithm> 
class Solution {
public:
    vector<int> getFinalState(std::vector<int>& nums, int k, int multiplier) {
         int n = nums.size();
        
        for(int i = 0; i < k; ++i) {
           
            auto mini = std::min_element(nums.begin(), nums.end());
            
          
            if (mini != nums.end()) {
               
                int minElement = *mini;
                
           
                *mini = minElement * multiplier;
            }
        }
        
        return nums;
    }
};