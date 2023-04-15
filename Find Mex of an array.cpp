int Mex(vector<int> a) {
  sort(a.begin(), a.end());
  if (a[0] > 0) return 0;
  for (int i = 1; i < (int) a.size(); i++) {
    if (a[i] > a[i - 1] + 1) {
      return a[i - 1] + 1;
    }
  }
  return a.back() + 1;
}
