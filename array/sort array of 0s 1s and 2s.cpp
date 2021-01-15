/*question: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1*/
#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ull unsigned long long
#define ll long long
void sort012(int a[], int n)
{
    /*Direct c++ library function*/
        sort(a,a+n);
}
int main()
{
    FIO;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort012(a,n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}