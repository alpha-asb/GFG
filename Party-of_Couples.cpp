//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSingle(int n, int arr[]){
        // code here
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=arr[i];
        }
        return ans;
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++){
        //     mp[arr[i]]++;
        // }
        // for(auto x:mp){
        //     if(x.second%2!=0){
        //         return x.first;
        //     }
        // }
        // return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
