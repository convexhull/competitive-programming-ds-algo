#include <bits/stdc++.h>
using namespace std;
unordered_set<int>s;//replace it with set for test.
int main(){
  auto T=clock();
  s.reserve(32768); //updated !
  s.max_load_factor(0.25); //updated !
  for(int i=0;i<1000000;i++)
    s.insert(i);
  cout<<double(clock()-T)/CLOCKS_PER_SEC<<'\n';
}
