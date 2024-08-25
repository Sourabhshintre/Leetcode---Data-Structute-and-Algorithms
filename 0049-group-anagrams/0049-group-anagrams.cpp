class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> map;
        int n = strs.size();
        string temp;

        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            map[strs[i]].push_back(temp);
        }

        vector<vector<string>> result;

        for(auto it = map.begin(); it != map.end(); ++it)
        {
            result.push_back(it->second);
        }

        return result;
    }
};