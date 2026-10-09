#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    int x = 0;

    for(int i = 0; i < n; i++){
      int y;
      cin>>y;

      x^=y;
    }

    if(n % 2 == 1){
      cout<<x<<'\n';
    }
    else {
      if(x == 0)
        cout<<0<<'\n';
      else 
        cout<<-1<<'\n';
    }
  }

  return 0;
}