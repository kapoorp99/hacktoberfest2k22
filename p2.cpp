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
  	  lli i,n,k,res=0;
  	  cin>>n>>k;
  	  vector<lli> v(n),temp(n);
  	  ffi(0,n)
  	  {
  	  	cin>>v[i];
  	  }
  	  sort(v.begin(),v.end());
  	  ffi(0,n)
  	  {
  	  	temp[i]=v[i];
  	  	v[i]=k%v[i];
  	  }
  	  lli tempb[n],f=0;
  	  ffi(0,n)
  	  {
  	  	if(v[i]==0)
  		{
  		 tempb[f]=temp[i];
  		 f++;
  		}
  	  }
  	sort(tempb,tempb+f);
  	fri(f-1,-1)
  	{
  		res=tempb[i];
  		break;
  	}
  	if(res==0)
  	{
  		cout<<-1<<'\n';
  	}
  	else
  	{
  		cout<<res<<'\n';
  	}
  }
return 0;
}
