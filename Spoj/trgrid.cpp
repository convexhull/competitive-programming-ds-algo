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
        int r,c;
        cin>>r>>c;
        if(c>=r)
        {
            if(r%2)
                cout<<"R"<<endl;
            else
                cout<<"L"<<endl;
        }
        else
        {
            c%2 ? cout<<"D"<<endl : cout<<"U"<<endl;
        }
    }
    return 0;
}
