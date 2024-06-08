//Brute- 2 loops cound all elements if cnt>n/2 return ele
//Optimal- moore's voting algorithm 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele=0;
        for(auto num:nums){
            if(cnt==0) {ele=num ; cnt=1;}
            else if(ele==num) cnt++;
            else cnt--;
        }
        /* If there might not be a majority element in the array
        int cnt1=0;
        for(num:nums){
            if(num==ele) cn1++;
        }
        if(cnt1>(nums.size()/2)) return ele;
        else */
            return ele;

    }
};
