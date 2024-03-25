class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinationsum(0,candidates,target,ans,ds);
        return ans;
    }
    void findcombinationsum(int index,vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int> &ds){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick up case
        if(candidates[index]<= target){
            ds.push_back(candidates[index]);
            findcombinationsum(index,candidates,target-candidates[index],ans,ds);
            ds.pop_back();
        }
        //dont pick up case
        findcombinationsum(index+1,candidates,target,ans,ds);
    }
};
