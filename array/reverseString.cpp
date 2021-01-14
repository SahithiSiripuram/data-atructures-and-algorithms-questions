/* Question: https://practice.geeksforgeeks.org/problems/reverse-a-string/1*/
#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ull unsigned long long
#define ll long long
string reverseWord(string str)
{
/* 
  STL method
  reverse(str.begin(),str.end());
  return str;
*/
  int l=str.length();
  for(int i=0,j=l-1;i<j;i++,j--)
  {
      char c=str[i];
      str[i]=str[j];
      str[j]=c;
  }
  return str;
}
int main()
{
    FIO;
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        cout<<reverseWord(s)<<"\n";
    }
    return 0;
}