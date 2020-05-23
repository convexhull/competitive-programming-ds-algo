#include<bits/stdc++.h>
using namespace std;
struct trienode
{
    int n_w;
    int n_p;
    trienode* child[26];
    void init()
    {
        n_w=n_p=0;
        for(int i=0;i<26;i++)
            child[i]=nullptr;
    }
};
void addword(trienode* vertex, string &word, int idx)
{
    if(word[idx]=='\0')
    {
        vertex->n_w++;
        vertex->n_p++;
        return ;
    }
    vertex->n_p++;
    int ch=(int)word[idx]-(int)'a';
    if(vertex->child[ch]==nullptr)
    {
        trienode* newnode=new trienode;
        newnode->init();
        vertex->child[ch]=newnode;
    }
    addword(vertex->child[ch],word,idx+1);
}
int countword(trienode* vertex,string &word, int idx)
{
    if(word[idx]=='\0')
        return vertex->n_w;
    int ch=(int)word[idx]-(int)'a';
    if(vertex->child[ch]==nullptr)
        return 0;
    return countword(vertex->child[ch],word,idx+1);
}
int countprefix(trienode* vertex,string &word, int idx)
{
    if(word[idx]=='\0')
        return vertex->n_p;
    int ch=(int)word[idx]-(int)'a';
    if(vertex->child[ch]==nullptr)
        return 0;
    return countprefix(vertex->child[ch],word,idx+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int num;
    cin>>num;
    trienode root;
    root.init();
    for(int i=1;i<=num;i++)
    {
        string s;
        cin>>s;
        addword(&root,s,0);
    }
    string s;
    cin>>s;
    cout<<"Words: "<<countword(&root,s,0)<<endl;
    cout<<"Prefix: "<<countprefix(&root,s,0)<<endl;
    return 0;
}
