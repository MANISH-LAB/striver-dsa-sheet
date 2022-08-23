https://leetcode.com/problems/course-schedule/submissions/

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int indeg[numCourses];
        vector<int> v[numCourses];
        for(int i=0;i<numCourses;i++){
            indeg[i]=0;
        }
        bool vis[numCourses];
        for(int i=0;i<numCourses;i++){
            vis[i]=0;
        }
        queue<int> q;
        for(int i=0;i<prerequisites.size();i++){
            indeg[prerequisites[i][0]]++;
            v[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        int count=0;
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0)q.push(i);
        }
        count=q.size();
        if(q.empty()==true)return false;
        else {
            while(!q.empty()){
                int u= q.front();
                q.pop();
                for(auto x :v[u]){
                    
                        indeg[x]--;
                        if(indeg[x]==0){q.push(x);count++;
                    }
                }
            }
            if(count==numCourses)return true;
            else return false;
        }
        
    }
};