struct Job {
   int id; // Job Id 
   int dead; // Deadline of job 
   int profit; // Profit 
};
class Solution 
{
    public:
    bool static comparison(Job a, Job b){
        return (a.profit>b.profit) ;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comparison);
        int maxdead=arr[0].dead;
        for(int i=0;i<n;i++){
            maxdead=max(maxdead,arr[i].dead);
        }
        int cntJobs=0 , jobProfit=0;
        vector<int> slots(maxdead+1,-1);
        for(int i=0;i<=n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slots[j]==-1){
                    slots[j]=i;
                    cntJobs++;
                    jobProfit+=arr[i].profit;
                    break;
                }
            }
        }
        return {cntJobs,jobProfit};
        
    } 
};
