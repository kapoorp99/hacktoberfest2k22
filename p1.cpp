#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
typedef long long int lli; 
#define tc  lli t;cin >> t;while(t--)
#define ffi(x,y) for(lli i=x;i<y;i++)
#define ffj(x,y) for(lli j=x;j<y;j++)
#define frj(x,y) for(lli j=x;j>y;j--)
#define fri(x,y) for(lli i=x;i>y;i--)
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  tc
  { 
  	  lli h,p;
  	  cin>>h>>p;
  	  while(p!=0)
  	  {
  	  	h-=p;
  	  	p/=2;
  	  }
  	  if(h>p)
  	  	cout<<0<<'\n';
  	  else
  	  	cout<<1<<'\n';
  }
return 0;
}
