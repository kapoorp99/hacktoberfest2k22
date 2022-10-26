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
  	  lli pc,pr,quot_pc=0,quot_pr=0;
  	  cin>>pc>>pr;
  	  quot_pc=pc/9;
  	  quot_pr=pr/9;
  	  if(pc%9!=0)
  	  {
  	  	quot_pc++;
  	  }
  	  if(pr%9!=0)
  	  {
  	  	quot_pr++;
  	  }
  	  if(quot_pc<quot_pr)
  	  	cout<<0<<" "<<min(quot_pc,quot_pr)<<'\n';
  	  else if(quot_pc>quot_pr)
  	  	cout<<1<<" "<<min(quot_pc,quot_pr)<<'\n';
  	  else
  	  	cout<<1<<" "<<min(quot_pc,quot_pr)<<'\n';
  }
return 0;
}
