//08.12.23
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> mpp;
       for(const auto& num:nums){
           if(mpp[num]>=1){
               return true;
           }
           mpp[num]++;
       } 
       return false;
    }
};
