//Approach 1- using of frequency map TC- O(n!xn), SC-O(n)+O(n)
/*class Solution {
public:
    void permutations( vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds, vector<int>& freq){
        if(ds.size()==nums.size()) ans.push_back(ds);
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                permutations(nums,ans,ds,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n=nums.size();
        vector<int> freq(n,0);
        permutations(nums,ans,ds,freq);
        return ans;
    }
};*/
//Approach 2-
class Solution {
public:
    void permutations(int ind, vector<int>& nums, vector<vector<int>>& ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            permutations(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutations(0,nums,ans);
        return ans;
    }
};
