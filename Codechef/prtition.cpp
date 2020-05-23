#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long x,n;
        cin>>x>>n;
        if(n<4)
            cout<<"impossible"<<endl;
        else if( ((n*(n+1))/2 - x )%2 )
            cout<<"impossible" <<endl;
        else
        {
            set<long long>a,b;
            long long thresh = ((n*(n+1))/2-x)/2;
            bool flag = true ;
            long long suma = 0;
            for(long long i=1;i<=n;i++)
            {
                if(i!=x)
                {
                    if(flag)
                    {
                        if(suma+i<thresh)
                        {
                            a.insert(i);
                            suma+=i;
                        }
                        else if(suma+i==thresh)
                        {
                            a.insert(i);
                            suma+=i;
                            flag  = false;
                        }
                        else if(suma+i>thresh)
                        {
                            long long diff = suma+i-thresh;
                            if(a.find(diff)!=a.end())
                            {
                                a.insert(i);
                                b.insert(diff);
                                a.erase(a.find(diff));
                                suma = thresh;
                                flag = false;
                            }
                            else
                            {
                                b.insert(i);
                            }
                        }
                    }
                    else
                        b.insert(i);
                }
            }

            long long sa = 0, sb = 0;
            vector<long long>ans(n+1,-1);
     
            for(auto it = a.begin();it!=a.end();it++)
            {
           		
                sa+= *it;
                
            }
            
            for(auto it = b.begin();it!=b.end();it++)
            {   
                
                sb+= *it;
                
            }
            if(sa==sb)
            {
            	ans[x]=2;
            	for(auto it=a.begin();it!=a.end();it++)
            		ans[*it]=0;
            	for(auto it=b.begin();it!=b.end();it++)
            		ans[*it]=1;
            	for(long long i=1;i<=n;i++)
            		cout<<ans[i];
            	cout<<endl;
            	//cout<<": "<<thresh<<endl;
            	//cout<<sa<<" "<<sb<<endl;
            }
            else
            {
            	a.clear();
            	b.clear();
            	flag = true;
            	suma = 0;
            	sa=0;
            	sb=0;
		        for(long long i=n;i>=1;i--)
            {
                if(i!=x)
                {
                    if(flag)
                    {
                        if(suma+i<thresh)
                        {
                            a.insert(i);
                            suma+=i;
                        }
                        else if(suma+i==thresh)
                        {
                            a.insert(i);
                            suma+=i;
                            flag  = false;
                        }
                        else if(suma+i>thresh)
                        {
                            long long diff = suma+i-thresh;
                            if(a.find(diff)!=a.end())
                            {
                                a.insert(i);
                                b.insert(diff);
                                a.erase(a.find(diff));
                                suma = thresh;
                                flag = false;
                            }
                            else
                            {
                                b.insert(i);
                            }
                        }
                    }
                    else
                        b.insert(i);
                }
            }

            	
            ans[x]=2;

            for(auto it=a.begin();it!=a.end();it++)
            {
            	ans[*it]=0;
            	//sa+= *it;
            }
            for(auto it=b.begin();it!=b.end();it++)
            	{
            		ans[*it]=1;
            		//sb+= *it;
            	}
            for(long long i=1;i<=n;i++)
            	cout<<ans[i];
            cout<<endl;
          	//cout<<": "<<thresh<<endl;
            //cout<<sa<<" "<<sb<<endl;

            }
            
            
        }
    }
    return 0;
}

