// Brute - triple loop check all subarray
// Better - Add new elements only and use double loops
// Optimal - Kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi= LONG_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi= max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
