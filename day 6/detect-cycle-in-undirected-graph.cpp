https://www.codingninjas.com/codestudio/problems/1062670?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

bool dfs(vector<int> arr[],bool vis[],int s,int parent){
    vis[s]=true;
    for (auto x: arr[s]){
        if(vis[x]==false){
            if(dfs(arr,vis,x,s)==true)return true;
            }
        else{
            if(x!=parent and x!=-1) return true;
        }
    }return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    vector<int> adj[n+1];
    for(int i=0;i<edges.size();i++){
adj[edges[i][0]].push_back(edges[i][1]);
    adj[edges[i][1]].push_back(edges[i][0]);}
    bool vis[n+1];
    for(int i=0;i<n+1;i++){
        vis[i]=false;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==false){
           if(dfs(adj,vis,i,-1))return "Yes";
        }
    }
    return "No";
}
