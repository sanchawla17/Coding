class Solution {
public:
    void combinations(int index, int target, vector<vector<int>>& ans, vector<int>& candidates, vector<int>& ds){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //Take
        if(target>= candidates[index]){
            ds.push_back(candidates[index]);
            combinations(index,target-candidates[index],ans,candidates,ds);
            ds.pop_back();
        }
        //Not take
        combinations(index+1,target,ans,candidates,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combinations(0,target,ans,candidates,ds);
        return ans;
    }
};
