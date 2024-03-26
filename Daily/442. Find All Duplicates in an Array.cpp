class Solution {
public:
    vector<int> findDuplicatews(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int num=abs(nums[i]);
            int idx=num-1;
            if(nums[idx]>0){
                nums[idx]*=-1;
            }else{
                ans.push_back(num);
            }
        }
        return ans;
    }
};
