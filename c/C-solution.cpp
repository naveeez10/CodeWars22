#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

bool check(string s)
{   bool f1=0,f2=0,f3=0;
    for(auto &x:s)
    {
        if(x=='a')f1=1;
        if(x=='b')f2=1;
        if(x=='c')f3=1;
     
    }
    return(f1&&f2&&f3);
}
int main()
{  
    fast
  
   ll t=1;
   cin>>t;
   while(t--)
   {
      string s;
      cin>>s;
  
      ll l=0,r=s.size()-1,mi= 2000010;
      map<char,ll>m;
      for(ll i=0;i<s.size();i++)
      {
          m[s[i]]=i+1;
          if(m['a']&&m['b']&&m['c'])
          {
              mi=min(mi,max({abs(m['a']-m['b']),abs(m['c']-m['b']),abs(m['a']-m['c'])})+1);
          }
      }
     cout<<(mi<2000010?mi:0)<<endl;
   }

   return 0;
}