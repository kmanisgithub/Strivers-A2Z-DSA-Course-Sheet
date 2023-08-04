vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(),a.end());
    vector<int> sl_ss = {a[a.size() - 2], a[1]};
  return sl_ss;
}
