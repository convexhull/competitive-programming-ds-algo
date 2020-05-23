#include<bits/stdc++.h>
using namespace std;
map < pair<int,int> , int > mp;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	mp[{1,2}]=2;
    cout<<mp[{3,5}]<<endl;
    cout<<mp[make_pair(1,2)]<<endl;
	return 0;
}

