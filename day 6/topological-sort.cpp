https://www.codingninjas.com/codestudio/problems/982938?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include<bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int> res;
    int indeg[v];
    queue<int> q;
    vector<int> ans[v];
for(int i=0;i<v;i++){
    indeg[i]=0;
}
    for(int i=0;i<edges.size();i++){
        ans[edges[i][0]].push_back(edges[i][1]);
    }
    for(int i=0;i<v;i++){
        for(auto x: ans[i]){
            indeg[x]++;
        }
    }
    
    for(int i=0;i<v;i++){
        if(indeg[i]==0)
        {q.push(i);
         res.push_back(i);}
    }
    while(!q.empty()){
        int y=q.front();
        q.pop();
        for(auto x: ans[y]){
            indeg[x]--;
            if(indeg[x]==0){q.push(x);
                            res.push_back(x);}
        }
    }
    return res;
}