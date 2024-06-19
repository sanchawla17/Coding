class Solution{

	public:
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    sort(coins.begin(),coins.end());
	    int cnt=0;
	    for(int i=M-1;i>=0;i--){
	        while(V>=coins[i]){
	            V-=coins[i];
	            cnt++;
	        }
	    }
	    return cnt;
	} 
	  
};
