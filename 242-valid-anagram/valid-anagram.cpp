class Solution {
public:
    bool isAnagram(string s, string t) {


       if (s.length() != t.length())
            return false;
        
        std::unordered_map<char, int> frequencyMap;
        
        // Count frequencies of characters in string s
        for (char c : s)
            frequencyMap[c]++;
        
        // Decrement frequencies of characters in string t
        for (char c : t) {
            if (frequencyMap.find(c) == frequencyMap.end() || frequencyMap[c] == 0)
                return false; // Character not found or frequency is already 0
            frequencyMap[c]--;
        }
        
        // Check if all frequencies are zero
        for (const auto& pair : frequencyMap) {
            if (pair.second != 0)
                return false; // Frequencies don't match
        }
        
        return true;

        
        // int s1 = s.length();
        // int s2 = t.length();

        // char ch1[s1];
        // char ch2[s2];

        // if(s1 != s2)
        //     return false;
        
       
        // for(int i=0;i<s1;i++)
        // {
        //     ch1[i] = s.at(i);
        // }

        // for(int i=0;i<s2;i++)
        // {
        //     ch2[i] = t.at(i);
        // }
        
        // std::sort(ch1, ch1 + s1);
        // std::sort(ch2, ch2 + s2);

        // for(int i=0;i<s1;i++)
        // {
        //     if(ch1[i] != ch2[i])
        //     {
        //         return false;
        //     }
        // }
        //  return true;



    }
};