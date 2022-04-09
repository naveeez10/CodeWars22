#include <bits/stdc++.h>
using namespace std;
 
/////////////////////////////////////////////////////////////////
#define testcase                int t;cin>>t;while(t--)
#define ll                      long long int
#define pl                      pair<ll,ll>
#define forl(i,a,b)             for(ll i=a;i<b;i++) 
#define vect                    vector<int>
#define vectl                   vector<ll>
#define vectp                   vector<pl>
#define ascen                   sort(v.begin(),v.end())
#define descen                  sort(v.rbegin(),v.rend())
#define fastnfurious            ios::sync_with_stdio(0);cin.tie(0);
#define puba                    push_back    
/////////////////////////////////////////////////////////////////
 
void kaam()
{
   ll n,flag=0;
   cin>>n;
   vector<ll>v;
   if(n%2==0)
   {
       ll x=sqrt(n/2);
       if(x*x*2==n)
       {cout<<"YES"<<endl;flag=1;return;}
   }
    if(n%4==0)
   {
        ll x=sqrt(n/4);
       if(x*x*4==n)
       {cout<<"YES"<<endl;flag=1;return;}
   }
   if(flag!=1)
   cout<<"NO"<<endl;
   
   
  
}
int main()
{   
    fastnfurious
   testcase
     kaam();	
	return 0;
}