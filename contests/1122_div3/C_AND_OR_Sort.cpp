#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;

  string s;
  cin>>s;

  vector<int> a(n);

  for(int i = 0; i < n; i++) a[i] = s[i] - '0';

  int sum = accumulate(a.begin(), a.end(), 0); // total number of 1's in the string

  // if s starts with 1 we have to convert all the later 0s to ones
  if(a[0] == 1){
    cout<< n - sum << '\n';
    return;
  }

  int ans = n+1, cur = 0;

  // if s starts with 0 we have to calculate the sum of 1's in the prefix and 0's in the suffix at each point and find the min

  for(int i = 0; i < n; i++){ // iterate through each point
    cur += a[i];    // counter for number of 1's in the prefix

    // prefix 1s = cur
    // prefix 0s = i - cur + 1
    // suffix 1s = sum - cur
    // suffix 0s = n - i - 1 - (sum - cur) = n - i - 1 - sum + cur
    // total swaps = prefix 1s + suffix 0s = cur + n - i - 1 - sum + cur
    ans = min(ans, cur + n - i - 1 - sum + cur);
  }

  cout<< ans << '\n';
}

int main(){
  int t;

  cin>>t;
  while(t--){
    solve();
  }

  return 0;
}