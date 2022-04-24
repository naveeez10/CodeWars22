
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
const ll N=1e5+10;

void Shrimad_Bhagavad_Gita(vector<ll>&fact)
{  
   ll n=0,ans=0;
   cin>>n;

   for(ll i=1;i<=n;i++)
   {
      ll now=fact[n-i+1];
      now*=fact[i];
      now%=mod;
      now*=(n-i+1);
      now%=mod;
      ans+=now;
      ans%=mod;
   }

   cout<<ans<<"\n";
}

int main()
{ 
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int problem=1;
   cin>>problem;

   vector<ll>fact(N);

   fact[0]=1;

   for(ll i=1;i<N;i++)
   {
      fact[i]=(fact[i-1]*i)%mod;
   }

   while(problem--)
   {
      Shrimad_Bhagavad_Gita(fact);
   }
   return 0;  
}
