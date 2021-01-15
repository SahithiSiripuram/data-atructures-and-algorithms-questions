/*question: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1*/
#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ull unsigned long long
#define ll long long
int kthSmallest(int a[], int l, int r, int k) 
{
    sort(a,a+r+1);
    return a[k-1];
}
int main()
{
    FIO;
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n;
        int a[n]; 
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        cout<<kthsmallest(a,0,n-1,k)<<"\n";
    }
    return 0;
}