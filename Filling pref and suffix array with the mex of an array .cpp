vector<bool> used1(n + 1, false);
    int mex1 = 0;
    vector<int> L(n + 1);
    for (int j = 0; j < n; j++){
      used1[a[j]] = true;
      while (used1[mex1]){
        mex1++;
      }
      L[j + 1] = mex1;
    }
    vector<bool> used2(n + 1, false);
    int mex2 = 0;
    vector<int> R(n + 1);
    for (int j = n - 1; j >= 0; j--){
      used2[a[j]] = true;
      while (used2[mex2]){
        mex2++;
      }
      R[j] = mex2;
    }
