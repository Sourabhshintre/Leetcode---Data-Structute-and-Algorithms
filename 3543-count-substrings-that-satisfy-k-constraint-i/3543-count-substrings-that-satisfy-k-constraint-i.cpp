class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        
    // vector<string> substrings
    int count=0;

    int n=s.length();
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {            
            string substring = s.substr(start, end - start + 1);
            // substrings.push_back(substring);

            int count_0 = 0, count_1 = 0;
            for (char c : substring) {
                if (c == '0') {
                    count_0++;
                } else if (c == '1') {
                    count_1++;
                }
            }

            if (count_0 <= k || count_1 <= k)
                count++;
        
    }
    }
    return count;
    }
};