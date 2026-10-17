#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    string s;
    cin>>s;

    unordered_set<int> st;
    int originalflips = 0;
    
    for(int i = 1; i < s.size(); i++){
      if(s[i] != s[i-1]){
        originalflips++;
      }
    }

    st.insert(originalflips);

    for(int i =1; i < s.size() - 1; i++){
      int change = 0;

      if(s[i-1] == s[i+1]) change+=2;

      st.insert(originalflips+1 + change);
    }
    
    cout<<st.size()<<'\n';
  }

  return 0;
}