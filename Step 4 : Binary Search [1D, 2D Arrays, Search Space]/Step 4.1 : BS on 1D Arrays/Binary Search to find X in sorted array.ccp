int search(vector<int> &nums, int low, int high, int target) {
    // Write your code here.
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(nums[mid]==target) return mid;
    else if(target>nums[mid]) return search(nums,mid+1,high,target);
    return search(nums,low,high-1,target);
}
int search(vector<int>&nums,int target){
    return search(nums,0,nums.size()-1,target);
}

/* int n=nums.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;*/
