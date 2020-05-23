#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        while(++n)
        {
            string s = to_string(n);
            int cnt = count(s.begin(),s.end(),'3');
            if(cnt>=3)
                break;
        }
        cout<<n<<endl;
    }
	return 0;
}

