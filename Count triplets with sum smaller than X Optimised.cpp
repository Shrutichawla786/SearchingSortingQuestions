Q.Count triplets with sum smaller than X
link-->https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1
code-->long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long count=0;
	    sort(arr , arr+n);
	    for(int i=0;i<n;i++){
	        int j=i+1;
	        int k=n-1;
	        while(j<k){
	            
	            if(arr[i]+arr[j]+arr[k]<sum){
	                count+=k-j;
	                j++;
	            }
	            else{
	                k--;
	            }
	            
	        }
	    }
	    return count;
	}
Expected Time Complexity: O(N2).
Expected Auxiliary Space: O(1).
