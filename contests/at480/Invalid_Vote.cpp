#include<bits/stdc++.h>
using namespace std;


int main(){
  int n, m;
  cin>>n>>m;

  vector<string> a(n);
  vector<int> sol(n, 0);
  string s;
  unordered_map<string, int> st;

  for(int i = 0; i < n; i++){ 
    cin>>a[i];
    st[a[i]] = i;
  }

  for(int i = 0; i < m; i++){
    cin>>s;

    if(st.find(s) != st.end()){
      sol[st[s]]++;
    }
    else {
      int nums = 0;
      int voteidx = -1;

      for(int j = 0; j < n; j++){
        string name = a[j];

        if(name.length() != s.length()) continue;

        int cnt = 0;
        for(int k = 0; k < name.length(); k++){
          if(name[k] == s[k])
            cnt++;
        }

        if(cnt == (name.length() - 1)){
          nums++;
          voteidx = j;
        }
      }

      if(nums == 1){
        sol[voteidx]++;
      }
    }
  }


  for(int i: sol) cout<<i<<'\n';

  return 0;
}