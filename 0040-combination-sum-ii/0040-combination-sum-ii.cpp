class Solution {
public:

    void backtrack(vector<int> &candidates,int target, vector<vector<int>>& res, vector<int>& v,int start)
    {
        if(target==0)
        {
            res.push_back(v);
            return;
        }

        for(int i=start;i<candidates.size();i++)
        {
            if(i>start && candidates[i] == candidates[i-1]) continue;

            if(candidates[i] > target) break;

            v.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], res, v, i + 1);
            v.pop_back();  // backtrack

        }        
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> res;
        vector<int> v;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,res,v,0);
        return res;
        
    }
};