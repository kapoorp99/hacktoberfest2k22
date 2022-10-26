#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
typedef long long int lli; 
#define pb push_back
#define tc  lli t;cin >> t;while(t--)
#define ffi(x,y) for(lli i=x;i<y;i++)
#define ffj(x,y) for(lli j=x;j<y;j++)
#define frj(x,y) for(lli j=x;j>y;j--)
#define fri(x,y) for(lli i=x;i>y;i--)
const long double PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899863;
lli kadane(lli a[], lli n)
{
	lli s=a[0],smax=a[0];
	ffi(0,n)
	{
		s = max(a[i],s+a[i]);
		smax = max(smax,s);
	}
	return smax;
}
bool isPowerof2(int x)
{
  return (x && (!(x & (x - 1))));
}
lli fast_gcd(lli a,lli b)
{
    if(b==0)
        return a;
    else
        return fast_gcd(b, a % b);
}
lli fast_power(lli b, lli n) 
{
    if(n==0)
        return 1;
    if(n==1)
      return b;
    long long halfn=fast_power(b,n/2);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return (((halfn*halfn)% M)*b)%M;
}
bool ispalindrome(string str,lli l,lli r)
{
    while(l<=r)
    {
        if(str[l]!=str[r])
        return false;
        l++;
        r--;
    }
    return true;
}
lli reversenum(lli n)
{
    lli ans=0;
    while(n)
    {
        ans= (ans*10)+n%10;
        n/=10;
    }
    return ans;
}
//function returning a pointer
lli * reverseArray(lli a[],lli n)
{
  lli head=0,tail=n-1;
  while(head<tail)
  {
    swap(a[head],a[tail]);
    head++;
    tail--;
  }
  return a;
}
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  tc
  { 
   lli n;
   cin>>n;
   lli a[n];
   ffi(0,n)
   {
    cin>>a[i];
   }
   reverseArray(a,n);
   ffi(0,n)
   {
    cout<<a[i]<<" ";
   }
   cout<<'\n';
  }
return 0;
}

//Time Complexity => O(n)
