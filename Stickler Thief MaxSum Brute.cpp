Q.Stickler Thief
link--->https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1
code-->int solve(int arr[] , int n){
        if(n<0){
            return 0;
        }
        if(n==0){
            return arr[0];
        }
        int inc= solve(arr , n-2)+arr[n];
        int excl= solve(arr , n-1)+0;
        return max(inc , excl);
        
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        return solve(arr , n-1);
    }
Expected Time Complexity:O(exponitial).
Expected Space Complexity:O(1).
