Q.Stickler Thief
link--->https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1
code-->int solve(int arr[] , int n , vector<int>&dp){
        if(n<0){
            return 0;
        }
        if(n==0){
            return arr[0];
        }
        if(dp[n] !=-1){
            return dp[n];
        }
        int inc= solve(arr , n-2 , dp)+arr[n];
        int excl= solve(arr , n-1 , dp)+0;
        
        dp[n]=max(inc , excl);
        return dp[n];
        
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>dp(n , -1);
        return solve(arr , n-1 , dp);
    }
Expected Time Complexity:O(exponitial).
Expected Space Complexity:O(1).
