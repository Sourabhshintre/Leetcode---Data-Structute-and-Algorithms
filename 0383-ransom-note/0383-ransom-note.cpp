class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

     unordered_map<char,int>count;

     for(char c:magazine)
     {
        count[c]++;
     }
    
    //  for (const auto& pair : count) {
    //         std::cout << pair.first << ": " << pair.second << std::endl;
    //     }

     for(char c: ransomNote)
     {
        if(count[c]>0)
        {
            count[c]--;
            // cout<<"...";
            // for (const auto& pair : count) {
            // std::cout << pair.first << ": " << pair.second << std::endl;
            // }
        }
        else
        {
            return false;
        }
     }
     return true;
    }
};