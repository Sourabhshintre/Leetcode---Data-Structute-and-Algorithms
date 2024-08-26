class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // set<int> s;
        // vector<int>myVector;

        // for(int i=0;i<numbers.size();i++)
        // {
        //     for(int j=i;j<numbers.size();j++)
        //     {
        //         if(numbers[i] + numbers[j] == target)
        //         {
        //             s.insert(i+1);
        //             s.insert(j+1);
                    
        //             if(s.size()==2)
        //             {
        //                 myVector.insert(myVector.end(), s.begin(), s.end());
        //                 break;
        //             }
        //             break;
        //         }
        //     }
        // }
        
       
        
        // return myVector;


        unordered_map<int, int> map;  
        vector<int> result;
        
        for (int i = 0; i < numbers.size(); ++i) {
            int complement = target - numbers[i];
            
            if (map.find(complement) != map.end()) {
                
                result.push_back(map[complement] + 1);
                result.push_back(i + 1);
                return result;
            }
            
            
            map[numbers[i]] = i;
        }
        
        return result;  

    }
};