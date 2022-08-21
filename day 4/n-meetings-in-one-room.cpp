https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        map<int,int> m;
       for(int x=0;x<n;x++){
            if(m[end[x]]==0)m[end[x]]=start[x];
            else{
                if ((end[x]-m[end[x]])>(end[x]-start[x])){
                    m[end[x]]=start[x];
                }
            }
        }
        
        sort(end,end+n);
        int i=0;
        int c=1;
        int j=1;
        while(i<n-1 and j<n){
            if(m[end[j]]>end[i]){
                c++;
                i=j;
                j++;
                
            }
            else {
                j++;
                
            }
            
            
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends