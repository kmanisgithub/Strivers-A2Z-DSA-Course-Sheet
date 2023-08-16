int numberOfGasStationRequired(long double dist, vector<int> &arr){
	int cnt=0;
        for (int i = 1; i < arr.size(); i++) {
            int numberInBtvn=((arr[i]-arr[i-1])/dist);
			if((arr[i]-arr[i-1])/dist==numberInBtvn*dist){
				numberInBtvn--;
			}
			cnt+=numberInBtvn;
        }
		return cnt;
}
long double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	int n=arr.size();
	long double low=0;
	long double high=0;
	for(int i=0; i<n-1; i++){
		high=max(high, (long double)(arr[i+1]-arr[i]));
	}
	long double diff=1e-6;
	while(high-low>diff){
		long double mid=(low+high)/(2.0);
		int cnt=numberOfGasStationRequired(mid, arr);
		if(cnt>k){
			low=mid;
		}
		else{
			high=mid;
		}
	}
	return high;	
}
