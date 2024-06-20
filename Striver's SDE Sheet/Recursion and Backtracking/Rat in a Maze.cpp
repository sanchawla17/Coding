class Solution{
    public:
    void solve(int i, int j,vector<vector<int>>& m,int& n,vector<string>& ans,vector<vector<int>>& visited, string path,int di[], int dj[]){
        if(i==n-1 && j==n-1){
            ans.push_back(path); 
            return;
        }
        string dirn="DLRU";
        for(int index=0;index<4;index++){
            int nexti= i+di[index];
            int nextj= j+dj[index];
            if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && m[nexti][nextj]==1 && !visited[nexti][nextj]){
                visited[i][j]=1;
                solve(nexti,nextj,m,n,ans,visited,path+dirn[index],di,dj);
                visited[i][j]=0;
            }
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> visited(n,vector<int>(n,0));
        int di[]={1,0,0,-1}; //i+ for DLRU
        int dj[]={0,-1,1,0}; //j+ for DLRU
        string path="";
        if(m[0][0]==1){
            visited[0][0]=1;
            solve(0,0,m,n,ans,visited,path,di,dj);
        }
        return ans;
    }
};
