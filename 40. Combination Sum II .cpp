class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> combination;
        combinationSum2(candidates, target, result, combination, 0);
        return result;
    }
private:
    void combinationSum2(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& combination, int begin)
    {
        if(target == 0)
        {
            result.push_back(combination);
            return;
        }
        for(int i = begin; i != candidates.size() && target >= candidates[i]; i++)
        {
            if(i == begin || candidates[i]!=candidates[i-1])
            {
                combination.push_back(candidates[i]);
                combinationSum2(candidates, target - candidates[i], result, combination, i+1);
                combination.pop_back();
            }
        }
    }
};