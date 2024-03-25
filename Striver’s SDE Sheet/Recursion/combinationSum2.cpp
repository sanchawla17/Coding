class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        combination2(0,candidates,target,ds,ans);
        return ans;
    }
    void combination2(int index, vector<int> &candidates, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        //taking one element not more than once
        for(int i=index;i<candidates.size();i++){
            //take
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            ds.push_back(candidates[i]);
            combination2(i+1,candidates,target-candidates[i],ds,ans);
            //dont take
            ds.pop_back();
        }
    }
};
