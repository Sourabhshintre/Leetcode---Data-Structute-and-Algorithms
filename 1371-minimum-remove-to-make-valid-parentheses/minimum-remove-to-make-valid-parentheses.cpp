class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int>st;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push(i);//push only index of char  in stack
            }
            else if(s[i] == ')')
            {
                if(st.empty())
                {
                    s[i] = '*';
                    // Closing brakcet has nothing to cancel in stack beacause stack iks empty
                    //mark this s[i] later delete this , here is the extra parathesis
                }
                else
                {
                    st.pop(); 
                }
            }
        }

         while(!st.empty())
            {
                s[st.top()] = '*';
                st.pop();
            }

            s.erase(std::remove(s.begin(), s.end(), '*'), s.end());

            return s;
    }
};