// Brute - 2 loops to compare all values and find max
// Optimal - taking min and max difference
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxPro= 0;
        int minPrice= prices[0];
        for(int i=0;i<n;i++){
            minPrice= min(minPrice,prices[i]);
            maxPro= max(maxPro,prices[i]-minPrice);
        }
        return maxPro;
    }
};
