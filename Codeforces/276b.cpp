#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int l = s.length();
    vector<int>freq(27);
    for(int i=0;i<l;i++)
        freq[s[i]]++;
    if(l%2==0)
    {
        if(accumulate(freq.begin(),freq.end(),0)%2==)
            cout<<"First";
        else
            cout<<"Second";
    }
    else
    {   
        
    }   
    return 0;
}

