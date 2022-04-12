
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{ 
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int problem=1;
   cin>>problem;
   while(problem--)
   {
      int n=0,cnt=0;

      string a,b;

      cin>>n>>a>>b;

      for(int i=0;i<n;i++)
      {
          if(a[i]==b[i])
          {
            cnt++;
          }
      }

      if(cnt>=n/2.0)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
   }
   return 0;  
}
