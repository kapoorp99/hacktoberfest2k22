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
  	  string s,p,temp;
  	  cin>>s>>p;
  	  lli ls,lp,f[26],k=0,cnt=0,last_pos=0;
  	  ls=s.length();
  	  lp=p.length();
  	  memset(f,0,sizeof(f));
  	  ffi(0,ls)
  	  {
  	  	f[s[i]-'a']++;
  	  }
  	  ffi(0,lp)
  	  {
  	  	f[p[i]-'a']--;
  	  }
  	  ffi(0,26)
  	  {
  	  	while(f[i]>0)
  	  	{
  	  		temp=temp+(char)(i+97);
  	  		f[i]--;
  	  		k++;
		}
  	  }
  	  ffi(0,ls-lp)
  	  {
  	  	if(temp[i] == p[0])
  	  	{
  	  		cnt++;
  	  	}
  	  }
  	  ffi(0,ls-lp)
  	  {
  	  	if(temp[i]<=p[0])
  	  	{
  	  		last_pos=i;
  	  	}
  	  }
  	  last_pos=last_pos - cnt;
  	  ffi(0,last_pos+1)
  	  {
  	  	cout<<temp[i];
  	  }
  	  cout<<p;
  	  ffi(last_pos+1,ls-lp)
  	  {
  	  	cout<<temp[i];
  	  }
  	  cout<<'\n';
  }
return 0;
}
