#include<bits/stdc++.h>
using namespace std;


int main(){
  char a;
  int cnt = 0;

  cin>>a;
  if(a == 'A' || a == 'D') 
    cnt++;

  cin>>a>>a>>a;
  if (a == 'A' || a == 'D')
    cnt++;

  if(cnt % 2 == 0) cout<<"No"<<'\n';
  else cout<<"Yes"<<'\n';

  return 0;
}