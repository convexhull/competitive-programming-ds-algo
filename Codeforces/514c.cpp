#include<bits/stdc++.h>
using namespace std;
class trienode
{
    public:
        trienode* child[3];
        void init()
        {
            for(int i=0;i<3;i++)
                child[i] = nullptr;
        }
};
void addw(trienode* &vertex, string &word, int idx)
{
    if(word[idx]=='\0')
        return ;
    int ch = word[idx]-'a';
    if(vertex->child[ch]!=nullptr)
        addw(vertex->child[ch],word,idx+1);
    else 
    {
    trienode* newchild = new trienode;
    newchild->init();
    vertex->child[ch] = newchild;
    addw(newchild,word,idx+1);
    }
}
bool findw(trienode* &vertex, string &word, int idx)
{
    if(word[idx]=='\0')
        return true;
    int ch = word[idx]-'a';
    if(vertex->child[ch]!=nullptr)
        return findw(vertex->child[ch],word,idx+1);
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    trienode* root = new trienode;
    root->init();
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        addw(root,s,0);
    }
    for(int i=1;i<=m;i++)
    {
        string s;
        cin>>s;
        bool f = false;
        for(int i=0;s[i]!='\0';i++)
        {
            vector<char>para{'a','b','c'};
            for(int j=0;j<3;j++)
            {
                if(para[j]!=s[i])
                {
                    string t = s;
                    t[i]=para[j];
                    f = f || findw(root,t,0);
                }
            }
        }
        f ? cout<<"YES" : cout<< "NO";
        cout<<endl;
    }
    return 0;
}
