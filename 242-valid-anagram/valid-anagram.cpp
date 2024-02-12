class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int s1 = s.length();
        int s2 = t.length();

        char ch1[s1];
        char ch2[s2];

        if(s1 != s2)
            return false;
        
       
        for(int i=0;i<s1;i++)
        {
            ch1[i] = s.at(i);
        }

        for(int i=0;i<s2;i++)
        {
            ch2[i] = t.at(i);
        }
        
        std::sort(ch1, ch1 + s1);
        std::sort(ch2, ch2 + s2);

        for(int i=0;i<s1;i++)
        {
            if(ch1[i] != ch2[i])
            {
                return false;
            }
        }
         return true;



    }
};