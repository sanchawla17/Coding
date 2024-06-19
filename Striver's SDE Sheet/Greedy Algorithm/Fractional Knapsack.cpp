// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    bool static comp(Item a, Item b){
        double aa = (double)a.value/(double)a.weight;
        double bb = (double)b.value/(double)b.weight;
        return aa>bb;
    }
    double fractionalKnapsack(int w, Item arr[], int n) {
        double totvalue=0.0;
        int currweight=0;
        sort(arr,arr+n,comp);
        for(int i=0;i<n;i++){
            if(currweight + arr[i].weight<=w){
                totvalue+=arr[i].value;
                currweight+=arr[i].weight;
            }
            else{
                totvalue+=(double)arr[i].value/(double)arr[i].weight * (w-currweight);
                break;
            }
        }
        return totvalue;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--) {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
