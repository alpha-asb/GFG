/*
class Solution{
public:
    int solve(string &str, int n,int l,int r){
        if(l==r){
            return 0;
        }
        if(r == l+1){
            return (str[l]==str[r])?0:1;
        }
        if(str[l] == str[r]){
           return solve(str,n,l+1,r-1);
        }
        else{
            return min(1+solve(str,n,l,r-1),1+solve(str,n,l+1,r));
        }
    }
    int kPalindrome(string str, int n, int k)
    {
        // code here
        int count = solve(str,n,0,n-1);
        // cout<<count;
        return count<=k;
    }
};
*/
class Solution {
public:
    int kPalindrome(string str, int n, int k) {
        // Create a DP table to store results of subproblems
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Fill the table
        for (int len = 2; len <= n; len++) {
            for (int l = 0; l <= n - len; l++) {
                int r = l + len - 1;
                if (str[l] == str[r]) {
                    dp[l][r] = dp[l+1][r-1];
                } else {
                    dp[l][r] = 1 + min(dp[l][r-1], dp[l+1][r]);
                }
            }
        }

        // The answer is in dp[0][n-1]
        return dp[0][n-1] <= k;
    }
};
