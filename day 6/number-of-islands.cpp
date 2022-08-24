https://www.codingninjas.com/codestudio/problems/630512?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include<bits/stdc++.h>
void bfs(int row,int col,vector<vector<int>> &vis,int **arr,int n,int m){
    queue<pair<int,int>> q;
    
    int r=row;
    int c=col;
    int a=n;
    int b= m;
    q.push({r,c});
    while(!q.empty()){
        int row= q.front().first;
        int col= q.front().second;
        q.pop();
        for(int delrow=-1;delrow<=1;delrow++){
            for(int delcol=-1;delcol<=1;delcol++){
                int nrow= row+delrow;
                int ncol= col+delcol;
                if(nrow>=0 and nrow<a and ncol>=0 and ncol<b and arr[nrow][ncol]==1 and !vis[nrow][ncol]){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }
        }
    }
    
}
int getTotalIslands(int **arr, int n, int m)
{
   // Write your code here.
    int count=0;
    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && arr[i][j]==1){
                count++;
                bfs(i,j,vis,arr,n,m);
            }
        }
    }return count;
}
