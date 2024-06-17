//Brute - Using set<vector<int>> ans to store unique and ordered answer.
//Optimal - avoiding same number when already taken once
class Solution {
public:
    void combinations(int index, int target, vector<vector<int>>& ans, vector<int>& candidates, vector<int>& ds){
        if(target==0){
            ans.push_back(ds); return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            ds.push_back(candidates[i]);
            combinations(i+1,target-candidates[i],ans,candidates,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        combinations(0,target,ans,candidates,ds);
        return ans;
    }
};
