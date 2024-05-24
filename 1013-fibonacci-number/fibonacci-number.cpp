class Solution {
public:
    int fib(int n,vector<int>&dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        
        dp[n]=fib(n-1)+fib(n-2,dp);
        return dp[n];
        
    }
    
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return fib(n,dp);
    }
};