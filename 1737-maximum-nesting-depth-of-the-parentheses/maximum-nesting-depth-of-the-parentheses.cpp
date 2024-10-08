class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count =0;
        int maxcount =0;

        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == ')')
            {
                st.push(s[i]);
                count++;
            }
            else if(s[i] == '(')
            {
                st.pop();
                count--;
            }

            maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};