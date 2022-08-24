https://www.codingninjas.com/codestudio/problems/1062626?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<queue>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
   int indeg[n+1];
    for(int i=0;i<=n;i++){
        indeg[i]=0;
    }
    vector<int> v[n+1];
    for(int i=0;i<edges.size();i++){
        v[edges[i].first].push_back(edges[i].second);
    }
    for(int i=1;i<=n;i++){
        for(auto x: v[i]){
            indeg[x]++;
        }
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    int count=q.size();
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto y: v[x] ){
            indeg[y]--;
            if(indeg[y]==0){
                q.push(y);
                count++;
            }
        }
      
    }
  return (count!=n);
  }