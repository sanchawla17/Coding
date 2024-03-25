class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        sums(0,0,arr,N,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
    void sums(int sum,int index,vector<int>& arr,int N, vector<int>& ans){
        if(index==N){
            ans.push_back(sum);
            return;
        }
        sums(sum+arr[index],index+1,arr,N,ans);
        sums(sum,index+1,arr,N,ans);
    }
};
