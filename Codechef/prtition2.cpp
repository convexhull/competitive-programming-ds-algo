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
        int x,n;
        cin>>x>>n;
        if(n<4)
            cout<<"impossible"<<endl;
        else if( ((n*(n+1))/2-x)%2 )
            cout<<"impossible"<<endl;
        else
        {
            int thresh = ((n*(n+1))/2-x)/2;
            vector<int>v(n+1,-1);
            switch(n%4)
            {
                case 3:
                    int c = 1;
                    for(int i=1;i<=n && c<= (n-1)/2-1;i++)
                    {
                        if(i!=x)
                           i%2 ?  v[i]=v[n-i+1]=0 : v[i]=v[n-i+1]=1;
                        c++;
                    }
                    if(x==(n+1)/2);
                    break;
                
                case 0:
                    for(int i=1;i<=n/2;i++)
                        i%2 ? v[i]=v[n-i+1]=0 : v[i]=v[n-i+1]=1;
                    



                        

                    

    
}

