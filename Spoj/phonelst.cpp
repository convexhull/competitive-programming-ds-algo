#include<bits/stdc++.h>
using namespace std;
struct trienode
{
    long long n_w;
    long long n_p;
    trienode* child[10];
    void init()
    {
        n_w=n_p=0;
        for(long long i=0;i<=9;i++)
            child[i]=nullptr;
    }
};
long long addword(trienode* vertex, string &word, long long idx)
{
    if(word[idx]=='\0')
    {
        if(vertex->n_p>0)
            return -1;
        vertex->n_w++;
        vertex->n_p++;
        return 0;
    }
    if(vertex->n_w>0)
        return -1;
    vertex->n_p++;
    long long ch=(long long)word[idx]-(long long)'0';
    if(vertex->child[ch]==nullptr)
    {
        trienode *newnode=new trienode;
        newnode->init();
        vertex->child[ch]=newnode;
    }
    addword(vertex->child[ch],word,idx+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        trienode root;
        root.init();
        bool flag=true;
        long long num;
        cin>>num;
        for(long long i=1;i<=num;i++)
        {
            string s;
            cin>>s;
            long long k=addword(&root,s,0);
            if(k==-1)
            {
                flag=false;
            }
        }
        if(!flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
