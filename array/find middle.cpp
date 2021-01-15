/*question: https://practice.geeksforgeeks.org/problems/middle-of-three2926/1*/
#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ull unsigned long long
#define ll long long
int middle(int a, int b, int c)
{
    if(a>b && a>c)
        if(b>c) return b;
        else return c;
    if(b>a && b>c)
        if(a>c) return a;
        else return c;
    if(a>b) return a;
    return b;
        
}
int main()
{
    FIO;
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        cout<<middle(a,b,c)<<"\n";
    }
    return 0;
}