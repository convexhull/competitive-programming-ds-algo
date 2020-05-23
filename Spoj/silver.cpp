#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(1)
    {
        cin>>n;
        if(!n)
            break;
        cout<<(int)log2(n)<<endl;
    }
    return 0;
}
