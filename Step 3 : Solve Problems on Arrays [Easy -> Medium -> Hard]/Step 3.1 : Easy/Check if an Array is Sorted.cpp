int isSorted(int n, vector<int> a) {
    // Write your code here.
    for (int i = 1; i < a.size(); i++) {
    if (a[i] < a[i - 1]) {
      return false;
    }
  }
  return true;
}
