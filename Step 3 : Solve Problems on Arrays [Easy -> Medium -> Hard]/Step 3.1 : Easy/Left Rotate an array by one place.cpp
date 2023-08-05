#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int element=arr[0];
    auto it=arr.begin();
    arr.erase(it);
    arr.push_back(element);
    return arr;
}
