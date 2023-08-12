bool possible(vector<int> &arr, int day, int m, int k) {
  int cnt = 0;
  int noOfbloom = 0;
        for(int i=0; i<arr.size(); i++){
			if(arr[i]<=day){
				cnt++;
			}
			else{
				noOfbloom+=(cnt/k);
				cnt=0;
			}
		}
	noOfbloom+=(cnt/k);
	return noOfbloom>=m;	
}
int roseGarden(vector<int> arr, int r, int b)
{
	// Write your code here
	long long val=r*1LL*b*1LL;
	if(val>arr.size()) return -1;
	int mini=INT_MAX, maxi=INT_MIN;
	for(int i=0; i<arr.size(); i++){
		mini=min(mini, arr[i]);
		maxi=max(maxi,arr[i]);
	}
	int low=mini,high=maxi;
	while(low<=high){
		int mid=(low+high)/2;
		if(possible(arr,mid,r,b)){
			high=mid-1;
		}
		else low=mid+1;
	}
	return low;
}
