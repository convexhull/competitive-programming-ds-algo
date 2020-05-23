#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>cor(n),wro(m);
    for(int i=0;i<n;i++)
        cin>>cor[i];
    for(int i=0;i<m;i++)
        cin>>wro[i];
    int max_time = *min_element(wro.begin(),wro.end()) - 1;
    int min_time = *max_element(cor.begin(),cor.end());
    min_time = max(min_time,2*(*min_element(cor.begin(),cor.end())));
    if(min_time>max_time)
        cout<<-1;
    else
        cout<<min_time;
    return 0;    
}

