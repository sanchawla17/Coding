class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=0, cnt=0, maxcnt=0,j=0;
    	while(i<n){
    	    if(arr[i]<=dep[j]){
    	        cnt++;
    	        i++;
    	    }
    	    else{
    	        cnt--;
    	        j++;
    	    }
    	    maxcnt=max(maxcnt,cnt);
    	}
    	return maxcnt;
    }
};
