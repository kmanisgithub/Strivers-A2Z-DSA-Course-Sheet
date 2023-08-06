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
