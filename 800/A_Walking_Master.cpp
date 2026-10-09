#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(d < b){
      cout<<-1<<'\n';
      continue;
    }

    int mov = d-b;

    if(a + mov >= c)
      cout<< mov + a + mov - c<<'\n';
    else
      cout<<-1<<'\n';
  }

  return 0;
}