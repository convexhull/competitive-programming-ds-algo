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
        int n,a;
        cin>>n>>a;
        if(a>=3)
        {
            cout<<1<<" ";
            int marker=0, rep = n/a, frac = n%a;
            string master = "abcdefghijklmnopqrstuvwxyz";
            for(int i=1;i<=rep;i++)
            {
                for(int j=0;j<=a-1;j++)
                    cout<<master[j];
            }
            for(int i=0;i<=frac-1;i++)
                cout<<master[i];
        }
        else
        {
            if(a==1)
            {
                cout<<n<<" ";
                for(int i=1;i<=n;i++)
                    cout<<'a';
            }
            else
            {
                if(n==1)
                    cout<<1<<" "<<'a';
                if(n==2)
                    cout<<1<<" "<<"ab";
                if(n==3)
                    cout<<2<<" "<<"aab";
                if(n==4)
                    cout<<2<<" "<<"aabb";
                if(n==5)
                    cout<<3<<" "<<"aaabb";
                if(n==6)
                    cout<<3<<" "<<"aaabbb";
                if(n==7)
                    cout<<3<<" "<<"aababbb";
                if(n==8)
                    cout<<3<<" "<<"aaababbb";
                if(n>8)
                {
                    string master = "abbaba";
                    int rep = n/6;
                    int frac = n%6;
                    cout<<4<<" ";
                    for(int i=1;i<=rep;i++)
                    {
                        cout<<master;
                    }
                    for(int i=0;i<=frac-1;i++)
                    {
                        cout<<master[i];
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

