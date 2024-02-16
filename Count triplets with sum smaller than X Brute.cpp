Q.Count triplets with sum smaller than X
link-->https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1
code-->
  long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    int count=0;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            for(int k=j+1;k<n;k++){
	                if((arr[i]+arr[j]+arr[k])<sum){
	                    count++;
	                }
	            }
	        }
	    }
	    return count;
	}

Expected Time Complexity: O(N^3).
Expected Auxiliary Space: O(1).
