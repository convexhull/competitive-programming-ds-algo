#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>freq(1001);
    int magic ;
    if(n%2)
        magic = n/2+1;
    else
        magic = n/2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        freq[x]++;
    }
    if(*max_element(freq.begin(),freq.end()) > magic)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}

