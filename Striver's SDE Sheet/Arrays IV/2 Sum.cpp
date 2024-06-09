//Brute - 2 loops find if = target
//Better- Map to check if target-num is there
//Optimal- Sort + 2 pointer NOT OPTIMAL WHEN INDEX RETURN
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int moreneeded=target-nums[i];
            if(mpp.find(moreneeded)!=mpp.end()){
                return{mpp[moreneeded],i};
            }
            mpp[nums[i]]=i;
        }
        return{};
    }
};
