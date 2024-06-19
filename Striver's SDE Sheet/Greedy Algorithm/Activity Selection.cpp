//Same as N meetings in a room
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{   
    struct activity{
        int start,end,pos;
    };
    public:
    static bool comparator(struct activity a , activity b){
        return a.end<b.end;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       activity arr[n];
        for(int i=0;i<n;i++){
            arr[i].start=start[i];
            arr[i].end=end[i];
            arr[i].pos=i;
        }
        sort(arr,arr+n,comparator);
        int cnt=1 , freetime=arr[0].end;
        //vector<int> ans;
        //ans.push_back(arr[0].pos);
        for(int i=1;i<n;i++){
            if(arr[i].start>freetime){
                cnt++;
                freetime=arr[i].end;
                //ans.push_back(arr[i].pos);
            }
        }
        //return ans;
        return cnt;
    }
};
    
  

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
