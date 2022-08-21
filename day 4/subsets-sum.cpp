https://practice.geeksforgeeks.org/problems/subset-sums2234/1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;

        /* There are totoal 2^n subsets */
        long long total = 1 << N;

        /* Consider all numbers from 0 to (2^n - 1) */
        for (long long i = 0; i < total; i++)
        {
            long long sum = 0;

            /* Consider binary representation of current i to decide which elements to pick. */
            for (int j = 0; j < N; j++)
            {
                if (i & (1 << j))
                    sum = sum + arr[j];
            }

            /* Push sum of picked elements. */
            ans.push_back(sum);
        }

        return ans;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends