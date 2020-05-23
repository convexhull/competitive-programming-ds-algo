#include<bits/stdc++.h>
using namespace std;
struct trienode 
{
    int numword;
    int numpref;
    trienode* child[26];
    void init()
    {
        numword = numpref = 0;
        for(int i=0;i<26;i++)
            child[i] = nullptr;
    }
};
void addword(trienode* &vertex, string &word, int idx)
{
    if(word[idx]=='\0')
    {
        vertex->numword ++;
        vertex->numpref++;
    }
    else
    {
        vertex->numpref ++;
        char ch = word[idx]-'a';
        if(vertex->child[ch]!=nullptr)
            addword(vertex->child[ch],word,idx+1);
        else
        {
            trienode* newchild;
            newchild = new trienode;
            newchild->init();
            vertex->child[ch] = newchild;
            addword(vertex->child[ch],word,idx+1);
        }
    }
}
int countword(trienode* &vertex, string &word, int idx)
{
    if(word[idx]=='\0')
        return vertex->numword;
    else
    {
        char ch = word[idx]-'a';
        if(vertex->child[ch]!=nullptr)
            return countword(vertex->child[ch],word,idx+1);
        else
            return 0;
    }
}
int countpref(trienode* &vertex, string &word, int idx)
{
    if(word[idx]=='\0')
        return vertex->numpref;
    else
    {
        char ch = word[idx]-'a';
        if(vertex->child[ch]!=nullptr)
            return countpref(vertex->child[ch],word,idx+1);
        else
            return 0;
    }
}
//Point to remember:
//Always use dynamic mem alloc using new(or malloc), to avoid dangling pointers when function goes out of scope.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    trienode* root;             //////////////////                 doing this ->     trienode* root;  and then passing root to addword    this will fuck the shit outta your brain. As the called function does not know about this variable as it is declared on stack. So always good to use new/malloc.. .  /////////////////////
    root = new trienode;
    root->init();
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        addword(root,s,0);
    }
    int Q;
    cin>>Q;
    while(Q--)
    {
        string s;
        cin>>s;
        cout<<"Numword: "<<countword(root,s,0)<<endl;
        cout<<"Numpref: "<<countpref(root,s,0)<<endl;
    }
    return 0;
}

