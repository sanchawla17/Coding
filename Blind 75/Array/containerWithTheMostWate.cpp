//08.12.23
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right= height.size()-1;
        int most=0;
        while(left<right){
            int area= min(height[left],height[right])*(right-left);
            if(area>most) most=area;
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return most;
    }
};
