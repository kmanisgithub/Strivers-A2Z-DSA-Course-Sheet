#include <bits/stdc++.h> 
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low=0, high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		//could be answer
		if(arr[mid]>=x){
			ans=mid;
			//looking for smaller index left 
			high=mid-1;
		}else{
			low=mid+1;//looking for right
		}
	}
	return ans;
}
int upperBound(vector<int> &arr, int n, int x){
	// Write your code here.
	int low=0, high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		//could be answer
		if(arr[mid]>x){
			ans=mid;
			//looking for smaller index left 
			high=mid-1;
		}else{
			low=mid+1;//looking for right
		}
	}
	return ans;	
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb=lowerBound(arr,n,k);
    if(lb == n || arr[lb] !=k) return {-1,-1};
    return {lb, upperBound(arr,n,k)-1};
}
