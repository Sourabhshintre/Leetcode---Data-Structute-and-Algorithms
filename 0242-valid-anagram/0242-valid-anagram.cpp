class Solution {
public:
    bool isAnagram(string s, string t) {

       if (s.length() != t.length()) {
        return false;
       }

        unordered_map<char,int> charcnt;

        // Count characters in string s
        for(char c:s)
            charcnt[c]++;

        //sunstract the count using string t
        for(char c:t)
        {
            if(charcnt.find(c) == charcnt.end() || charcnt[c] == 0)
            {
                return false;
            }
            charcnt[c]--;
        }

        //If all the counts are zero,it's an anagram
        return true;
        


        
        // --------------------------------------------------------------------------------

        // if(s.size() != t.size())
        //     return false;

        // vector<int> count(26,0);

        // for(char c : s)
        // {
        //     count[c-'a']++;
        // }

        // for(char c:t)
        // {
        //     count[c-'a']--;
        // }

        // for(int cnt : count)
        // {
        //     if(cnt != 0)
        //         return false;
        // }
        // return true;

        // ----------------------------------------------------------------------------
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