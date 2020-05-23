#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(cin>>s)
    {
        int tchef = 0, tother = 0;
        int step = 0;
        bool a = false;
        bool b = false;
        for(int i=0;i<10;i++)
        {
            if(i%2==0) //Team A's chance
            {
                if(s[i]=='1')
                {
                    tchef++;
                    if(5-i/2 + tother < tchef )
                    {
                        a = true;
                        step = i;
                        break;
                    }
                }
                else
                {   
                    if(tother > 5- i/2 -1 + tchef)
                    {
                        b = true;
                        step = i;
                        break;
                    }
                }
            }
            else //Team B's chance 
            {   
                if(s[i]=='1')
                {
                    tother++;
                    if(tother > 5-(i-1)/2-1 + tchef)
                    {
                        b = true;
                        step = i;
                        break;
                    }
                }
                else
                {
                    if(tchef > 5-(i-1)/2 -1 + tother)
                    {
                        a = true;
                        step = i;
                        break;
                    }
                }
            }
        }
        if(tother == tchef)
        {
            int i;
            for( i=10;i<20;i++) {
            if(i%2==0)
            {
                if(s[i]=='1')
                    tchef++;
            }
            else
            {
                if(s[i]=='1')
                    tother++;
                if(tchef > tother)
                {
                    cout<<"TEAM-A "<<i+1<<endl;
                    break;
                }
                if(tother > tchef)
                {
                    cout<<"TEAM-B "<< i+1<<endl;
                    break;
                }
            }
          }
            if(i==20)
                cout<<"TIE"<<endl;

        }
        else
            a ? cout<<"TEAM-A "<< step+1 <<endl : cout<<"TEAM-B "<< step+1 <<endl;
    }
    return 0;
}

